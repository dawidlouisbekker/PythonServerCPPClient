// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: auth.proto

#include "auth.pb.h"
#include "auth.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace Authenticator {

static const char* Auth_method_names[] = {
  "/Authenticator.Auth/ClientToServerPortStream",
  "/Authenticator.Auth/ServerToClientPortStream",
  "/Authenticator.Auth/ClientVerification",
  "/Authenticator.Auth/ServerVerification",
};

std::unique_ptr< Auth::Stub> Auth::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Auth::Stub> stub(new Auth::Stub(channel, options));
  return stub;
}

Auth::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_ClientToServerPortStream_(Auth_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_ServerToClientPortStream_(Auth_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_ClientVerification_(Auth_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ServerVerification_(Auth_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::ClientReader< ::Authenticator::Variables>* Auth::Stub::ClientToServerPortStreamRaw(::grpc::ClientContext* context, const ::Authenticator::Answer& request) {
  return ::grpc::internal::ClientReaderFactory< ::Authenticator::Variables>::Create(channel_.get(), rpcmethod_ClientToServerPortStream_, context, request);
}

void Auth::Stub::async::ClientToServerPortStream(::grpc::ClientContext* context, const ::Authenticator::Answer* request, ::grpc::ClientReadReactor< ::Authenticator::Variables>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::Authenticator::Variables>::Create(stub_->channel_.get(), stub_->rpcmethod_ClientToServerPortStream_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::Authenticator::Variables>* Auth::Stub::AsyncClientToServerPortStreamRaw(::grpc::ClientContext* context, const ::Authenticator::Answer& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::Authenticator::Variables>::Create(channel_.get(), cq, rpcmethod_ClientToServerPortStream_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::Authenticator::Variables>* Auth::Stub::PrepareAsyncClientToServerPortStreamRaw(::grpc::ClientContext* context, const ::Authenticator::Answer& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::Authenticator::Variables>::Create(channel_.get(), cq, rpcmethod_ClientToServerPortStream_, context, request, false, nullptr);
}

::grpc::ClientReader< ::Authenticator::Variables>* Auth::Stub::ServerToClientPortStreamRaw(::grpc::ClientContext* context, const ::Authenticator::Answer& request) {
  return ::grpc::internal::ClientReaderFactory< ::Authenticator::Variables>::Create(channel_.get(), rpcmethod_ServerToClientPortStream_, context, request);
}

void Auth::Stub::async::ServerToClientPortStream(::grpc::ClientContext* context, const ::Authenticator::Answer* request, ::grpc::ClientReadReactor< ::Authenticator::Variables>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::Authenticator::Variables>::Create(stub_->channel_.get(), stub_->rpcmethod_ServerToClientPortStream_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::Authenticator::Variables>* Auth::Stub::AsyncServerToClientPortStreamRaw(::grpc::ClientContext* context, const ::Authenticator::Answer& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::Authenticator::Variables>::Create(channel_.get(), cq, rpcmethod_ServerToClientPortStream_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::Authenticator::Variables>* Auth::Stub::PrepareAsyncServerToClientPortStreamRaw(::grpc::ClientContext* context, const ::Authenticator::Answer& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::Authenticator::Variables>::Create(channel_.get(), cq, rpcmethod_ServerToClientPortStream_, context, request, false, nullptr);
}

::grpc::Status Auth::Stub::ClientVerification(::grpc::ClientContext* context, const ::Authenticator::Answer& request, ::Authenticator::Variables* response) {
  return ::grpc::internal::BlockingUnaryCall< ::Authenticator::Answer, ::Authenticator::Variables, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ClientVerification_, context, request, response);
}

void Auth::Stub::async::ClientVerification(::grpc::ClientContext* context, const ::Authenticator::Answer* request, ::Authenticator::Variables* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::Authenticator::Answer, ::Authenticator::Variables, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ClientVerification_, context, request, response, std::move(f));
}

void Auth::Stub::async::ClientVerification(::grpc::ClientContext* context, const ::Authenticator::Answer* request, ::Authenticator::Variables* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ClientVerification_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Authenticator::Variables>* Auth::Stub::PrepareAsyncClientVerificationRaw(::grpc::ClientContext* context, const ::Authenticator::Answer& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::Authenticator::Variables, ::Authenticator::Answer, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ClientVerification_, context, request);
}

::grpc::ClientAsyncResponseReader< ::Authenticator::Variables>* Auth::Stub::AsyncClientVerificationRaw(::grpc::ClientContext* context, const ::Authenticator::Answer& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncClientVerificationRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Auth::Stub::ServerVerification(::grpc::ClientContext* context, const ::Authenticator::Answer& request, ::Authenticator::Variables* response) {
  return ::grpc::internal::BlockingUnaryCall< ::Authenticator::Answer, ::Authenticator::Variables, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ServerVerification_, context, request, response);
}

void Auth::Stub::async::ServerVerification(::grpc::ClientContext* context, const ::Authenticator::Answer* request, ::Authenticator::Variables* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::Authenticator::Answer, ::Authenticator::Variables, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ServerVerification_, context, request, response, std::move(f));
}

void Auth::Stub::async::ServerVerification(::grpc::ClientContext* context, const ::Authenticator::Answer* request, ::Authenticator::Variables* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ServerVerification_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::Authenticator::Variables>* Auth::Stub::PrepareAsyncServerVerificationRaw(::grpc::ClientContext* context, const ::Authenticator::Answer& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::Authenticator::Variables, ::Authenticator::Answer, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ServerVerification_, context, request);
}

::grpc::ClientAsyncResponseReader< ::Authenticator::Variables>* Auth::Stub::AsyncServerVerificationRaw(::grpc::ClientContext* context, const ::Authenticator::Answer& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncServerVerificationRaw(context, request, cq);
  result->StartCall();
  return result;
}

Auth::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Auth_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< Auth::Service, ::Authenticator::Answer, ::Authenticator::Variables>(
          [](Auth::Service* service,
             ::grpc::ServerContext* ctx,
             const ::Authenticator::Answer* req,
             ::grpc::ServerWriter<::Authenticator::Variables>* writer) {
               return service->ClientToServerPortStream(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Auth_method_names[1],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< Auth::Service, ::Authenticator::Answer, ::Authenticator::Variables>(
          [](Auth::Service* service,
             ::grpc::ServerContext* ctx,
             const ::Authenticator::Answer* req,
             ::grpc::ServerWriter<::Authenticator::Variables>* writer) {
               return service->ServerToClientPortStream(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Auth_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Auth::Service, ::Authenticator::Answer, ::Authenticator::Variables, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Auth::Service* service,
             ::grpc::ServerContext* ctx,
             const ::Authenticator::Answer* req,
             ::Authenticator::Variables* resp) {
               return service->ClientVerification(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Auth_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Auth::Service, ::Authenticator::Answer, ::Authenticator::Variables, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Auth::Service* service,
             ::grpc::ServerContext* ctx,
             const ::Authenticator::Answer* req,
             ::Authenticator::Variables* resp) {
               return service->ServerVerification(ctx, req, resp);
             }, this)));
}

Auth::Service::~Service() {
}

::grpc::Status Auth::Service::ClientToServerPortStream(::grpc::ServerContext* context, const ::Authenticator::Answer* request, ::grpc::ServerWriter< ::Authenticator::Variables>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Auth::Service::ServerToClientPortStream(::grpc::ServerContext* context, const ::Authenticator::Answer* request, ::grpc::ServerWriter< ::Authenticator::Variables>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Auth::Service::ClientVerification(::grpc::ServerContext* context, const ::Authenticator::Answer* request, ::Authenticator::Variables* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Auth::Service::ServerVerification(::grpc::ServerContext* context, const ::Authenticator::Answer* request, ::Authenticator::Variables* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace Authenticator

