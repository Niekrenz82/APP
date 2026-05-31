#include "2_6.h"
#include <cmath>
#include <iostream>

double newton_Raphson(double initialGuess, double epsilon)
{
    double x_previous = initialGuess;
    double x_current;
    
    for (int i = 0; i < 100; i++)
    {
        double f_x = std::exp(x_previous) + x_previous * x_previous * x_previous - 5.0;
        double f_prime_x = std::exp(x_previous) + 3.0 * x_previous * x_previous;
        
        x_current = x_previous - f_x / f_prime_x;
        
        if (std::abs(x_current - x_previous) < epsilon)
        {
            return x_current;
        }
        
        x_previous = x_current;
    }
    
    return x_current;
}
