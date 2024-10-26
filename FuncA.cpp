// FuncA.cpp
#include "FuncA.h"
#include <cmath>
   double FuncA::calculate(double x) {
       double result = 0.0;
       for (int k = 0; k < 3; ++k) {  // Only first 3 elements
           double term = pow(-1, k) * eulerNumbers[k] * pow(x, 2 * k) / tgamma(2 * k + 1);
           result += term;
       }
       return result;
  }
   
