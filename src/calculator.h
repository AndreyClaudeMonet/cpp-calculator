#pragma once

#include <string>
#include <optional>

using Number = long double;

class Calculator {
public:
    Calculator();

    void Set(Number n);           // Установить текущее число
    Number GetNumber() const;     // Получить текущее число

    void Add(Number n);           // Сложение
    void Sub(Number n);           // Вычитание
    void Div(Number n);           // Деление
    void Mul(Number n);           // Умножение
    void Pow(Number n);           // Возведение в степень

    std::string GetNumberRepr() const; // Получить строковое представление числа

private:
    Number current_number_;       // Текущее число
};