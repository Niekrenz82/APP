#include <iostream>
#include "ComplexNumber.hpp"
#include "Matrix2x2.hpp"
#include "Student.hpp"
#include "GraduateStudent.hpp"
#include "PhdStudent.hpp"
#include "Exception.hpp"
#include "OutOfRangeException.hpp"
#include "FileNotOpenException.hpp"
#include "CalculateExponential.hpp"
#include "Exercise82.hpp"

int main() {
    std::cout << "=== Testing Assignment 2 Exercises ===" << std::endl << std::endl;
    
    // Test Exercise 6.1: ComplexNumber
    std::cout << "--- Exercise 6.1: ComplexNumber ---" << std::endl;
    ComplexNumber z1(3, 4);
    ComplexNumber z2(1, 2);
    std::cout << "z1 = " << z1 << std::endl;
    std::cout << "z2 = " << z2 << std::endl;
    std::cout << "z1 + z2 = " << (z1 + z2) << std::endl;
    std::cout << "z1 - z2 = " << (z1 - z2) << std::endl;
    std::cout << "z1 * z2 = " << (z1 * z2) << std::endl;
    std::cout << "|z1| = " << z1.CalculateModulus() << std::endl;
    std::cout << "arg(z1) = " << z1.CalculateArgument() << std::endl;
    std::cout << "z1^2 = " << z1.CalculatePower(2) << std::endl;
    std::cout << "conjugate(z1) = " << z1.CalculateConjugate() << std::endl;
    std::cout << std::endl;
    
    // Test Exercise 6.2: Matrix2x2
    std::cout << "--- Exercise 6.2: Matrix2x2 ---" << std::endl;
    Matrix2x2 m1(1, 2, 3, 4);
    Matrix2x2 m2(2, 1, 1, 2);
    std::cout << "Matrix m1:" << std::endl;
    m1.Print();
    std::cout << "Matrix m2:" << std::endl;
    m2.Print();
    std::cout << "m1 + m2:" << std::endl;
    (m1 + m2).Print();
    std::cout << "m1 - m2:" << std::endl;
    (m1 - m2).Print();
    std::cout << "det(m1) = " << m1.CalcDeterminant() << std::endl;
    std::cout << "m1 inverse:" << std::endl;
    m1.CalcInverse().Print();
    Matrix2x2 m3 = m1;
    m3.MultScalar(2.0);
    std::cout << "2 * m1:" << std::endl;
    m3.Print();
    std::cout << std::endl;
    
    // Test Exercise 7.1: Inheritance Hierarchy
    std::cout << "--- Exercise 7.1: Student Hierarchy ---" << std::endl;
    Student s1("Alice", 100, 5000);
    std::cout << "Student: " << s1.name << ", Money owed: " << s1.MoneyOwed() << std::endl;
    
    GraduateStudent gs1("Bob", 200, 8000, true);
    std::cout << "GraduateStudent (fullTime): " << gs1.name << ", Money owed: " << gs1.MoneyOwed() << std::endl;
    
    GraduateStudent gs2("Charlie", 150, 7000, false);
    std::cout << "GraduateStudent (partTime): " << gs2.name << ", Money owed: " << gs2.MoneyOwed() << std::endl;
    
    PhdStudent ps1("Diana", 100, 10000, true);
    std::cout << "PhdStudent (fullTime): " << ps1.name << ", Money owed: " << ps1.MoneyOwed() << std::endl;
    std::cout << std::endl;
    
    // Test Exercise 8.2: Template CalcAbs
    std::cout << "--- Exercise 8.2: CalcAbs Template ---" << std::endl;
    std::cout << "CalcAbs(-5) = " << CalcAbs(-5) << std::endl;
    std::cout << "CalcAbs(3.14) = " << CalcAbs(-3.14) << std::endl;
    std::cout << "CalcAbs(-10) = " << CalcAbs(-10) << std::endl;
    std::cout << std::endl;
    
    // Test Exercise 9.1: Exception Hierarchy
    std::cout << "--- Exercise 9.1: Exception Hierarchy ---" << std::endl;
    Exception e1("BaseException", "This is a base exception");
    e1.PrintDebug();
    
    OutOfRangeException ore("Index 10 is out of range [0-5]");
    ore.PrintDebug();
    
    FileNotOpenException fnoe("Could not open file: data.txt");
    fnoe.PrintDebug();
    std::cout << std::endl;
    
    // Test Exercise 6.1.7: CalculateExponential
    std::cout << "--- Exercise 6.1.7: Matrix Exponential ---" << std::endl;
    ComplexNumber **A = new ComplexNumber*[2];
    A[0] = new ComplexNumber[2];
    A[1] = new ComplexNumber[2];
    A[0][0] = ComplexNumber(1, 0);
    A[0][1] = ComplexNumber(0, 0);
    A[1][0] = ComplexNumber(0, 0);
    A[1][1] = ComplexNumber(1, 0);
    
    ComplexNumber **result = new ComplexNumber*[2];
    result[0] = new ComplexNumber[2];
    result[1] = new ComplexNumber[2];
    
    CalculateExponential(A, 5, result);
    std::cout << "e^I (approx):" << std::endl;
    printMatrix(result, 2, 2);
    
    delete[] A[0];
    delete[] A[1];
    delete[] A;
    delete[] result[0];
    delete[] result[1];
    delete[] result;
    
    std::cout << "All tests completed!" << std::endl;
    return 0;
}
