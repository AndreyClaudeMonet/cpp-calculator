// calculator.h
#pragma once
#include <string>
using Number = long double;

class Calculator {
public:
    Calculator();
    void Set(Number n);
    Number GetNumber() const;
    void Add(Number n);
    void Sub(Number n);
    void Div(Number n);
    void Mul(Number n);
    void Pow(Number n);

private:
    Number current_number_ = 0.0;
};