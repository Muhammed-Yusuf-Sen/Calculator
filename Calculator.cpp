#include <iostream>
#include "Calculator.hpp"
using namespace std;


float Calculate::result_1;

float Calculate::sum(float num1,float num2)
{
    return result_1 = num1 + num2;
}
float Calculate::sub(float num1,float num2)
{
    return result_1 = num1 - num2;
}
float Calculate::mul(float num1,float num2)
{
    return result_1 = num1 * num2;
}
float Calculate::div(float num1, float num2)
{
    return result_1 = num1 / num2;
}
