#include <iostream>
#include <memory>
#include <string>
#include <thread>
#include <future>
#include "equations.h"
#include <grpcpp/grpcpp.h>
#include "auth.grpc.pb.h" // Include the generated header file

// Using the generated namespace from the proto file

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using Authenticator::Auth;
using Authenticator::Answer;
using Authenticator::Variables;

bool Connected = false;

class AuthClient {
public:
    AuthClient(std::shared_ptr<Channel> channel) : stub_(Auth::NewStub(channel)) {}

    Variables ClientVerification(double answer_value) {
        Answer request;
        request.set_answer(answer_value);  // Set your request data

        Variables response;
        ClientContext context;
        Status status;
        // Call the method
        status = stub_->ClientVerification(&context, request, &response);

        if (status.ok()) {
            Connected = true;
            return response;  // Return the response if successful
        } else {
            std::cerr << "gRPC call failed: " << status.error_code() << ": " << status.error_message() << std::endl;
            return Variables();  // Return a default response on failure
        }
    }

    INT32 ServerToClientPortStream(double answer_value) {
        Answer request;
        Variables var;

        request.set_answer(answer_value);  // Set your request data

        ClientContext context;
        std::unique_ptr<grpc::ClientReader<Variables>> reader(
            stub_->ServerToClientPortStream(&context, request));

        
        std::string EquationContext;

        do {
            reader->Read(&var);
            EquationContext = var.servercontext();
            std::cout << "not done" << std::endl;
        } while (EquationContext == "00000");
        double Answer = calcAnswer(var.a(), var.b(), var.c(), var.x(), EquationContext.c_str());
        int port = (int)Answer % 65535;
        Status status = reader->Finish();
        if (!status.ok()) {
            std::cerr << "RPC failed: " << status.error_code() << ": " << status.error_message() << std::endl;
        }
        return port;
        // Check the status of the RPC
    }

private:
    std::unique_ptr<Auth::Stub> stub_;
};

int RunGrpcCallInThread(AuthClient& client, double answer_value) {
    // std::promise and std::future for capturing the value
    std::promise<int> result_promise;
    std::future<int> result_future = result_promise.get_future();

    // Launch the gRPC stream in a separate thread
    std::thread grpc_thread([&client, answer_value, &result_promise]() {
        // Call the function and store the result in the promise
        int result = client.ServerToClientPortStream(answer_value);
        result_promise.set_value(result);
        });

    // Detach the thread to run independently
    grpc_thread.detach();

    // Return the future so that the caller can get the value once available
    return result_future.get();  // Block until result is available
}

int main(int argc, char** argv) {
    AuthClient client(grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials()));
    double answer_value = 10.0;  // Example answer value
    Variables response = client.ClientVerification(answer_value);

    // Print response
    std::cout << "Received variables:" << std::endl;
    std::cout << "a: " << response.a() << ", b: " << response.b() << ", c: " << response.c()
        << ", x: " << response.x() << ", ServerContext: " << response.servercontext() << std::endl;


  
    if (Connected == true) {
        double answer_value = 10.0;
        int port_value = RunGrpcCallInThread(client, answer_value);
        std::cout << std::endl << port_value;
        AuthClient client(grpc::CreateChannel("localhost:" + std::to_string(port_value), grpc::InsecureChannelCredentials()));
        answer_value = 10.0;
        Variables response = client.ClientVerification(answer_value);
        std::cout << "Received variables:" << std::endl;
        std::cout << "a: " << response.a() << ", b: " << response.b() << ", c: " << response.c()
            << ", x: " << response.x() << ", ServerContext: " << response.servercontext() << std::endl;

    }
    else {
        std::cout << "Not connected";
    }
    

    return 0;
}