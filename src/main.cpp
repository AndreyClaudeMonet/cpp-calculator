#include "calculator.h"
#include <cctype>
#include <iostream>
#include <string>
#include <vector>

int main()
{
    if (!RunCalculatorCycle())
    {
        return 1;
    }
    return 0;
}