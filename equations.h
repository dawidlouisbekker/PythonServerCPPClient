#pragma once
#ifndef EQUATIONS
#define EQUATIONS

#include <string>
#include <cmath>

static int a;
static int b;
static int c;
static int x;

std::string EquationContext;

double calcAnswer(int A, int B, int C, int X, const char* equationContext) {
    std::string EquationContext(equationContext);

    if (EquationContext == "0000") {
        return A * X + B * 0.66;
    }
    if (EquationContext == "0001") {
        return A * pow(X, 2) + B * X + C * 0.1435;
    }
    if (EquationContext == "0011") {
        return (A * B * pow(X, 3)) + C * 0.8762;
    }
    if (EquationContext == "0010") {
        return X * B - C + A * 0.808;
    }
    if (EquationContext == "0100") {
        if (B > 0) {
            return (double)A / B * C;
        }
        return A + B * pow(X, 4) - C;
    }
    if (EquationContext == "0101") {
        double log_arg1 = C + 1;
        if (log_arg1 <= 0) {
            log_arg1 = log_arg1 * (-1);
        }
        return A * log(log_arg1) + B * X + C;
    }
    if (EquationContext == "0110") {
        if ((B + C) < 0) {
            if (B < 0) {
                B = B * (-1);
            }
            if (C < 0) {
                C = C * (-1);
            }
        }
        return (A * X) / (B + C);
    }
    if (EquationContext == "0111") {
        return pow(A, 2) + B * pow(X, 2) - C;
    }
    if (EquationContext == "1000") {
        return A * sin(X) + B * cos(C);
    }
    if (EquationContext == "1001") {
        return A * exp(X) + B - C;
    }
    if (EquationContext == "1010") {
        return A / X + B * C;
    }
    if (EquationContext == "1011") {

        double log_arg = C + 1;
        if (log_arg <= 0) {
            log_arg = 1;
        }
        return A * pow(X, B) + log(log_arg);
    }
    if (EquationContext == "1100") {
        return A * pow(X, 5) - B * X + C;
    }
    if (EquationContext == "1101") {
        return A * tanh(X) + B * X + pow(C, 2);
    }
    if (EquationContext == "1110") {
        return A * X * +B - (C + 500);
    }
    if (EquationContext == "1111") {
        if (A > 0 && X > 0) {
            return B * 35 / A + 9 * C / X;
        }
        else {
            return A * X + B * X - C * X + x * 200;
        }

    }

    // Default case, if none of the conditions match
    return 0.0;
}

#endif // !EQUATIONS
