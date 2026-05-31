# Assignment 2 - Detailed Exercises

## Exercise 6.1: ComplexNumber Class

The files `ComplexNumber.hpp` and `ComplexNumber.cpp` are provided. Extend this class to include the following features:

1. **GetRealPart and GetImaginaryPart methods**: Methods that allow access to the private members `mRealPart` and `mImaginaryPart`.

2. **Friend functions**: Create friend functions `RealPart` and `ImaginaryPart` so you may write either `z.GetImaginaryPart()` or `ImaginaryPart(z)`.

3. **Overridden copy constructor**: Implement a proper copy constructor.

4. **Real number constructor**: A constructor that allows you to specify a real number in complex form through a constructor that accepts one double precision floating point variable as input, sets the real part to the input variable, and the imaginary part to zero.

5. **CalculateConjugate method**: A const method that returns the complex conjugate (x - iy) of a complex number (x + iy).

6. **SetToConjugate method**: A method with void return type that sets the complex number (x + iy) to its complex conjugate (x - iy).

7. **Matrix exponential**: Write code to dynamically allocate memory for a 3×3 matrix of complex numbers. Calculate the exponential of the matrix, where the exponential of a matrix A is given by:

$$\exp(A) = \sum_{n=0}^{\infty} \frac{A^n}{n!}$$

In practice, truncate the infinite sum at a suitably large value of n. After allocating memory dynamically, ensure proper cleanup.

8. **Test cases**: Test the class to ensure special cases give sensible results:
   - $(0 + 0i)^n$ should equal zero for most values of n
   - Any number raised to n = 0 should return 1

---

## Exercise 6.2: Matrix2x2 Class

Develop a class of 2×2 matrices of double precision floating point variables with the following features:

1. **Default constructor**: Overridden default constructor that initializes all entries of the matrix to zero.

2. **Copy constructor**: Overridden copy constructor.

3. **Parameterized constructor**: A constructor that specifies the four entries of the matrix and allocates these entries appropriately.

4. **Determinant method**: A method that returns the determinant of the matrix.

5. **Inverse method**: A method that returns the inverse of the matrix, if it exists.

6. **Assignment operator overloading**: Allow code such as `A = B;` for instances of the class.

7. **Unary subtraction operator**: Allow code such as `A = -B;` for instances of the class.

8. **Binary addition and subtraction operators**: Allow code such as `A = B + C;` or `A = B - C;` for instances of the class.

9. **Scalar multiplication method**: A method that multiplies a matrix by a specified double precision floating point variable.

---

## Exercise 7.1: Student Inheritance Hierarchy

Develop classes to describe the students at a university:

1. **Student class**: Write a base class of students at the university with the following public members:
   - A string for the student's name
   - A double precision floating point variable for library fines owed
   - A double precision floating point variable for tuition fees owed
   - A method that returns the total money owed (sum of library fines and tuition fees)
   - Several constructors that take different arguments

2. **Private library fines**: Make the student's library fines a private member of the class (must be nonnegative). Provide:
   - One method to set this variable only to nonnegative values
   - One method to access this private variable

3. **GraduateStudent class**: Derive a class of graduate students from the Student class. Add a member variable that stores whether the student is full-time or part-time. All undergraduate students are full-time; graduate students may be full-time or part-time.

4. **Virtual MoneyOwed method**: Use polymorphism to write a method that calculates the total money owed by a graduate student. Graduate students do not pay tuition fees. Implement this using a virtual function in the parent class.

5. **PhdStudent class**: Derive a class of Ph.D. students from the GraduateStudent class. Ph.D. students do not pay library fines. Write a method that calculates the total money owed by a Ph.D. student.

---

## Exercise 8.2: Template for Absolute Value

Use templates to write a single function that may be used to calculate the absolute value of:
- An integer
- A double precision floating point number

**Implementation note**: Implement the template directly in a header file; do not use a separate `.cpp` file.

---

## Exercise 9.1: Exception Hierarchy

Extend the Exception class (from Listings 9.1 and 9.2) by creating two inherited classes:

1. **OutOfRangeException**: A derived class that extends the Exception class.

2. **FileNotOpenException**: A derived class that extends the Exception class.

**Requirements**:
- Each of the two new inherited classes should derive from the Exception class in a similar manner to the way the Ebook class derives from the Book class
- The constructors for each class should take only the `probString` argument to set the `mProblem` member
- Each constructor should automatically set the `mTag` member (similar to how the format member was set in the Ebook constructor)
- Write a catch block that is able to catch a generic exception but can also differentiate between these two types of errors

---

## Function Signatures Summary

Based on ASSIGNMENTS.md, implement these classes/functions in your assignment:

| Exercise | Class/Function | Description |
|----------|----------------|-------------|
| 6.1.1–6 | `ComplexNumber` | Arithmetic, modulus, argument, power, conjugate, operator overloading |
| 6.1.7 | `CalculateExponential()` | Matrix exponential via summation (denominator = n!) |
| 6.2 | `Matrix2x2` | Determinant, inverse, operator overloading, scalar multiply |
| 7.1 | `Student` / `GraduateStudent` / `PhdStudent` | Inheritance hierarchy, virtual `MoneyOwed()` |
| 8.2 | `CalcAbs<T>()` | Template absolute value — implemented directly in header |
| 9.1 | `Exception` / `OutOfRangeException` / `FileNotOpenException` | Custom exception hierarchy |
