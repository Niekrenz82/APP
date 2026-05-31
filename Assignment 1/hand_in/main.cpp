#include "2_6.h"
#include "3_3.h"
#include "5_3.h"
#include "5_4.h"
#include "5_6.h"
#include "5_9.h"
#include "5_10.h"
#include <iostream>
#include <iomanip>

int main()
{
    // Exercise 2.6: Newton-Raphson
    std::cout << "=== Exercise 2.6: Newton-Raphson ===" << std::endl;
    double root = newton_Raphson(0.0, 1e-7);
    std::cout << "Root: " << std::setprecision(7) << root << std::endl << std::endl;
    
    // Exercise 3.3: Implicit Euler
    std::cout << "=== Exercise 3.3: Implicit Euler ===" << std::endl;
    implicit_Euler(11);
    std::cout << "ODE solution written to xy.dat" << std::endl << std::endl;
    
    // Exercise 5.3: Swap Functions
    std::cout << "=== Exercise 5.3: Swap Functions ===" << std::endl;
    double x = 3.5, y = 7.2;
    std::cout << "Before swap (pointer): x=" << x << ", y=" << y << std::endl;
    swap_pointer(&x, &y);
    std::cout << "After swap (pointer): x=" << x << ", y=" << y << std::endl;
    
    double a = 1.1, b = 2.2;
    std::cout << "Before swap (reference): a=" << a << ", b=" << b << std::endl;
    swap_ref(a, b);
    std::cout << "After swap (reference): a=" << a << ", b=" << b << std::endl << std::endl;
    
    // Exercise 5.4: Mean and Std Dev
    std::cout << "=== Exercise 5.4: Mean and Std Dev ===" << std::endl;
    double arr[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    int len = 5;
    double mean = calc_mean(arr, len);
    double std_dev = calc_std(arr, len);
    std::cout << "Array: ";
    for (int i = 0; i < len; i++) std::cout << arr[i] << " ";
    std::cout << std::endl;
    std::cout << "Mean: " << mean << std::endl;
    std::cout << "Std Dev: " << std_dev << std::endl << std::endl;
    
    // Exercise 5.6: Multiply Functions
    std::cout << "=== Exercise 5.6: Multiply Functions ===" << std::endl;
    double **A = new double*[2];
    for (int i = 0; i < 2; i++) A[i] = new double[3];
    A[0][0] = 1.0; A[0][1] = 2.0; A[0][2] = 3.0;
    A[1][0] = 4.0; A[1][1] = 5.0; A[1][2] = 6.0;
    
    double **B = new double*[3];
    for (int i = 0; i < 3; i++) B[i] = new double[2];
    B[0][0] = 1.0; B[0][1] = 2.0;
    B[1][0] = 3.0; B[1][1] = 4.0;
    B[2][0] = 5.0; B[2][1] = 6.0;
    
    double **C = new double*[2];
    for (int i = 0; i < 2; i++) C[i] = new double[2];
    
    Multiply(C, A, B, 2, 3, 3, 2);
    std::cout << "Matrix-Matrix multiplication result:" << std::endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            std::cout << C[i][j] << " ";
        std::cout << std::endl;
    }
    std::cout << std::endl;
    
    // Exercise 5.9: Solve 3x3
    std::cout << "=== Exercise 5.9: Solve 3x3 Linear System ===" << std::endl;
    double **A_33 = new double*[3];
    for (int i = 0; i < 3; i++) A_33[i] = new double[3];
    A_33[0][0] = 2.0; A_33[0][1] = 1.0; A_33[0][2] = -1.0;
    A_33[1][0] = -3.0; A_33[1][1] = -1.0; A_33[1][2] = 2.0;
    A_33[2][0] = -2.0; A_33[2][1] = 1.0; A_33[2][2] = 2.0;
    
    double b_33[] = {8.0, -11.0, -3.0};
    double u_33[] = {0.0, 0.0, 0.0};
    
    solve3by3(A_33, b_33, u_33);
    std::cout << "Solution: u = [" << u_33[0] << ", " << u_33[1] << ", " << u_33[2] << "]" << std::endl << std::endl;
    
    // Exercise 5.10: Gaussian Elimination
    std::cout << "=== Exercise 5.10: Gaussian Elimination ===" << std::endl;
    int n = 3;
    double **A_ge = new double*[n];
    for (int i = 0; i < n; i++) A_ge[i] = new double[n];
    A_ge[0][0] = 2.0; A_ge[0][1] = 1.0; A_ge[0][2] = -1.0;
    A_ge[1][0] = -3.0; A_ge[1][1] = -1.0; A_ge[1][2] = 2.0;
    A_ge[2][0] = -2.0; A_ge[2][1] = 1.0; A_ge[2][2] = 2.0;
    
    double b_ge[] = {8.0, -11.0, -3.0};
    double u_ge[] = {0.0, 0.0, 0.0};
    
    guassian_elimination(A_ge, b_ge, u_ge, n);
    std::cout << "Solution: u = [" << u_ge[0] << ", " << u_ge[1] << ", " << u_ge[2] << "]" << std::endl;
    
    // Clean up
    for (int i = 0; i < 2; i++) delete[] A[i];
    delete[] A;
    for (int i = 0; i < 3; i++) delete[] B[i];
    delete[] B;
    for (int i = 0; i < 2; i++) delete[] C[i];
    delete[] C;
    for (int i = 0; i < 3; i++) delete[] A_33[i];
    delete[] A_33;
    for (int i = 0; i < n; i++) delete[] A_ge[i];
    delete[] A_ge;
    
    return 0;
}
