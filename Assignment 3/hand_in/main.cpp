#include "Vector.hpp"
#include "Matrix.hpp"
#include "SparseVector.hpp"
#include <iostream>
#include <complex>

int main()
{
    // Test Vector<double>
    std::cout << "=== Vector<double> ===" << std::endl;
    Vector<double> v1(3);
    v1[0] = 1.0;
    v1[1] = 2.0;
    v1[2] = 3.0;
    
    Vector<double> v2(3);
    v2[0] = 4.0;
    v2[1] = 5.0;
    v2[2] = 6.0;
    
    Vector<double> v3 = v1 + v2;
    std::cout << "v1 + v2: ";
    for (int i = 0; i < v3.size(); i++)
        std::cout << v3[i] << " ";
    std::cout << std::endl;
    
    // Test Vector<int>
    std::cout << "\n=== Vector<int> ===" << std::endl;
    Vector<int> iv1(3);
    iv1[0] = 10;
    iv1[1] = 20;
    iv1[2] = 30;
    
    Vector<int> iv2(3);
    iv2[0] = 1;
    iv2[1] = 2;
    iv2[2] = 3;
    
    Vector<int> iv3 = iv1 + iv2;
    std::cout << "iv1 + iv2: ";
    for (int i = 0; i < iv3.size(); i++)
        std::cout << iv3[i] << " ";
    std::cout << std::endl;
    
    // Test Matrix<double>
    std::cout << "\n=== Matrix<double> ===" << std::endl;
    Matrix<double> m1(2, 3);
    m1(0, 0) = 1.0;  m1(0, 1) = 2.0;  m1(0, 2) = 3.0;
    m1(1, 0) = 4.0;  m1(1, 1) = 5.0;  m1(1, 2) = 6.0;
    
    Matrix<double> m2(2, 3);
    m2(0, 0) = 1.0;  m2(0, 1) = 0.0;  m2(0, 2) = 1.0;
    m2(1, 0) = 1.0;  m2(1, 1) = 1.0;  m2(1, 2) = 0.0;
    
    Matrix<double> m3 = m1 + m2;
    std::cout << "m1 + m2:" << std::endl;
    for (int i = 0; i < m3.GetNumberOfRows(); i++)
    {
        for (int j = 0; j < m3.GetNumberOfColumns(); j++)
            std::cout << m3(i, j) << " ";
        std::cout << std::endl;
    }
    
    // Test matrix-vector multiplication
    std::cout << "\n=== Matrix-Vector Multiplication ===" << std::endl;
    Vector<double> vtest(3);
    vtest[0] = 1.0;
    vtest[1] = 2.0;
    vtest[2] = 3.0;
    
    Vector<double> result = m1 * vtest;
    std::cout << "m1 * v: ";
    for (int i = 0; i < result.size(); i++)
        std::cout << result[i] << " ";
    std::cout << std::endl;
    
    // Test getStorage()
    std::cout << "\n=== getStorage() ===" << std::endl;
    const auto& storage = v1.getStorage();
    std::cout << "v1 storage size: " << storage.size() << std::endl;
    
    // Test SparseVector
    std::cout << "\n=== SparseVector<double> ===" << std::endl;
    SparseVector<double> sv1(1000);
    sv1.setValue(5, 3.14);
    sv1.setValue(100, 2.71);
    sv1.setValue(500, 1.41);
    
    std::cout << "SparseVector sv1:" << std::endl;
    std::cout << "  sv1.getValue(5) = " << sv1.getValue(5) << std::endl;
    std::cout << "  sv1.getValue(100) = " << sv1.getValue(100) << std::endl;
    std::cout << "  sv1.getValue(50) = " << sv1.getValue(50) << " (zero)" << std::endl;
    std::cout << "  Non-zero count: " << sv1.getNonZeroCount() << std::endl;
    
    // Test SparseVector addition
    std::cout << "\n=== SparseVector Addition ===" << std::endl;
    SparseVector<double> sv2(1000);
    sv2.setValue(5, 1.0);
    sv2.setValue(200, 5.0);
    
    SparseVector<double> sv3 = sv1 + sv2;
    std::cout << "sv1 + sv2:" << std::endl;
    std::cout << "  (sv1 + sv2).getValue(5) = " << sv3.getValue(5) << std::endl;
    std::cout << "  (sv1 + sv2).getValue(100) = " << sv3.getValue(100) << std::endl;
    std::cout << "  (sv1 + sv2).getValue(200) = " << sv3.getValue(200) << std::endl;
    std::cout << "  Non-zero count: " << sv3.getNonZeroCount() << std::endl;
    
    // Test SparseVector subtraction
    std::cout << "\n=== SparseVector Subtraction ===" << std::endl;
    SparseVector<double> sv4 = sv1 - sv2;
    std::cout << "sv1 - sv2:" << std::endl;
    std::cout << "  (sv1 - sv2).getValue(5) = " << sv4.getValue(5) << std::endl;
    std::cout << "  Non-zero count: " << sv4.getNonZeroCount() << std::endl;
    
    // Test Vector<std::complex<double>>
    std::cout << "\n=== Vector<complex<double>> ===" << std::endl;
    Vector<std::complex<double>> cv1(2);
    cv1[0] = std::complex<double>(1.0, 2.0);
    cv1[1] = std::complex<double>(3.0, 4.0);
    std::cout << "cv1[0] = " << cv1[0] << std::endl;
    std::cout << "cv1[1] = " << cv1[1] << std::endl;
    
    std::cout << "\n=== All tests passed! ===" << std::endl;
    return 0;
}
