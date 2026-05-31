#include "2_6.h"
#include <cmath>
#include <iostream>

double newton_Raphson(double initialGuess, double epsilon)
{
    double x_previous = initialGuess;
    double x_current;
    
    // Iterate up to 100 times
    for (int i = 0; i < 100; i++)
    {
        // Calculate f(x) = e^x + x^3 - 5
        double f_x = std::exp(x_previous) + x_previous * x_previous * x_previous - 5.0;
        
        // Calculate f'(x) = e^x + 3*x^2
        double f_prime_x = std::exp(x_previous) + 3.0 * x_previous * x_previous;
        
        // Newton-Raphson update: x_i = x_{i-1} - f(x_{i-1}) / f'(x_{i-1})
        x_current = x_previous - f_x / f_prime_x;
        
        // Check convergence condition: |x_i - x_{i-1}| < epsilon
        if (std::abs(x_current - x_previous) < epsilon)
        {
            std::cout << x_current << std::endl;
            return x_current;
        }
        
        x_previous = x_current;
    }
    
    std::cout << x_current << std::endl;
    return x_current;
}
