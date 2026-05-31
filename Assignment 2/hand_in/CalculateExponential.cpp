#include "CalculateExponential.hpp"
#include <iostream>

void CalculateExponential(ComplexNumber **A, int nMax, ComplexNumber **res) {
    // Determine matrix size by assuming square matrix
    // We'll iterate through to find the size - for now assume symmetric and squared
    int size = 3;  // Default to 3x3 for diagonal matrices
    
    // Initialize result to identity matrix
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) {
                res[i][j] = ComplexNumber(1, 0);
            } else {
                res[i][j] = ComplexNumber(0, 0);
            }
        }
    }
    
    // Compute e^A = I + A + A^2/2! + A^3/3! + ... + A^nMax/nMax!
    ComplexNumber **A_power = new ComplexNumber*[size];
    for (int i = 0; i < size; i++) {
        A_power[i] = new ComplexNumber[size];
    }
    
    // Initialize A_power to A (first power)
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            A_power[i][j] = A[i][j];
        }
    }
    
    double factorial = 1.0;
    
    for (int n = 1; n <= nMax; n++) {
        factorial *= n;
        
        // Add A^n / n! to result
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                res[i][j] = res[i][j] + (A_power[i][j] * (1.0 / factorial));
            }
        }
        
        // Compute A^(n+1) = A^n * A
        if (n < nMax) {
            ComplexNumber **temp = new ComplexNumber*[size];
            for (int i = 0; i < size; i++) {
                temp[i] = new ComplexNumber[size];
            }
            
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    temp[i][j] = ComplexNumber(0, 0);
                    for (int k = 0; k < size; k++) {
                        temp[i][j] = temp[i][j] + (A_power[i][k] * A[k][j]);
                    }
                }
            }
            
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    A_power[i][j] = temp[i][j];
                }
            }
            
            for (int i = 0; i < size; i++) {
                delete[] temp[i];
            }
            delete[] temp;
        }
    }
    
    for (int i = 0; i < size; i++) {
        delete[] A_power[i];
    }
    delete[] A_power;
}

void printMatrix(ComplexNumber **A, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << A[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
