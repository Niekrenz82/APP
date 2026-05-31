#include "2_6.h"
#include <iostream>
#include <cmath>

int main()
{
    std::cout << "========================================" << std::endl;
    std::cout << "Newton-Raphson Method for f(x) = e^x + x^3 - 5" << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << std::endl;
    
    // Initial guess
    double x0 = 0.0;
    double epsilon = 1e-7;
    int maxIter = 100;
    
    std::cout << "Initial guess x_0 = " << x0 << std::endl;
    std::cout << "Convergence tolerance epsilon = " << epsilon << std::endl;
    std::cout << "Maximum iterations = " << maxIter << std::endl;
    std::cout << std::endl;
    
    // Call the Newton-Raphson function
    double root = newton_Raphson(x0, epsilon, maxIter);
    
    std::cout << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << "Result: x = " << root << std::endl;
    std::cout << "========================================" << std::endl;
    
    // Verify the solution
    double f_root = std::exp(root) + root * root * root - 5.0;
    std::cout << "Verification: f(x) = e^x + x^3 - 5 = " << f_root << std::endl;
    std::cout << "Expected: close to 0" << std::endl;
    
    return 0;
}
