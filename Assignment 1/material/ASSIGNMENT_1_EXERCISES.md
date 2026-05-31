# Assignment 1 - Detailed Exercises

## Exercise 2.6: Newton-Raphson Method

The Newton-Raphson method is used to solve nonlinear equations of the form f(x) = 0. This is an iterative algorithm: given an initial guess x₀, successive iterates satisfy:

$$x_i = x_{i-1} - \frac{f(x_{i-1})}{f'(x_{i-1})}, \quad i = 1,2,3,...$$

The algorithm terminates when $|x_i - x_{i-1}| < \epsilon$ for some user-prescribed ε.

**Problem:** Apply the Newton-Raphson algorithm to $f(x) = e^x + x^3 - 5$ with initial guess $x_0 = 0$.

**Tasks:**
1. Write down (on paper) the Newton-Raphson iteration for this choice of f(x)
2. Using a for loop and an array for the iterates xᵢ, write a program that implements the Newton-Raphson iteration for i = 1,2,3,...,100. Print out the value of xᵢ on each iteration, and confirm that the iteration converges as i increases. At this stage, do not worry about terminating the iteration when ε is sufficiently small.
3. Think of a check that can be performed on the iterates xᵢ as i becomes larger, that allows you to have confidence that your solution is correct. Implement this check.

---

## Exercise 3.3: Implicit Euler Method

Write code to implement the implicit (or backward) Euler method to solve the initial value ordinary differential equation:

$$\frac{dy}{dx} = -y, \quad y(0) = 1$$

on the interval $0 \leq x \leq 1$ using a constant step size h.

**Requirements:**
- Allow the user to specify the number of grid points N they want to use at the command line
- Use an assert statement to ensure that the number of grid points is greater than 1
- Use the number of grid points to calculate the step size h
- Your code should print a file called `xy.dat` that has two columns: the calculated values of x; and the calculated values of y
- Plot the data from the file `xy.dat` and hence compare it with the true solution $y = e^{-x}$

**Method:** The implicit Euler method for this problem results in the difference relation:

$$y_0 = 1, \quad y_n - y_{n-1} = -y_n \cdot h, \quad n = 1,2,...,N-1$$

where h is step size, yₙ is the solution at $x_n = nh$, n = 0,1,2,...,N-1, N is the number of grid points, and we use zero-based indexing for the vectors x and y.

---

## Exercise 5.3: Swap Functions

Write a function that swaps the values of two double precision floating point numbers, so that these changes are visible in the code that has called this function.

1. Write this function using **pointers**
2. Write this function using **references**

---

## Exercise 5.4: Mean and Standard Deviation

Write a function that can be used to calculate the mean and standard deviation of an array of double precision floating point numbers.

**Formula:** The standard deviation σ of a collection of numbers xⱼ (j = 1,2,...,N) is given by:

$$\sigma = \sqrt{\frac{\sum_{j=1}^{N}(x_j - \bar{x})^2}{N-1}}$$

where $\bar{x}$ is the mean of the numbers.

**Note:** Guard against division by zero when the array length is 1.

---

## Exercise 5.6: Multiply Function Overloads

Overload the Multiply function from Exercise 5.5 so that it may be used to multiply:

1. A vector and a matrix of given sizes
2. A matrix and a vector of given sizes
3. A scalar and a matrix of a given size
4. A matrix of a given size and a scalar

---

## Exercise 5.9: Solve 3×3 Linear System

Write a module for solving the 3×3 linear system Au = b where A is nonsingular.

---

## Exercise 5.10: Gaussian Elimination

Write a module for solving the n×n linear system Au = b using Gaussian elimination with pivoting, where A is nonsingular.

Refer to Section A.2.1.3 in the textbook for details of the algorithm.

---

## Function Signatures Summary

Based on ASSIGNMENTS.md, implement these functions in your assignment:

| Exercise | Function(s) | Description |
|----------|-------------|-------------|
| 2.6 | `newton_Raphson()` | Newton-Raphson root-finding method |
| 3.3 | `implicit_Euler()` | Solve ODE, output x/y pairs to `xy.dat` |
| 5.3 | `swap_pointer()`, `swap_ref()` | Swap values via pointer and reference |
| 5.4 | `calc_mean()`, `calc_std()` | Mean and standard deviation |
| 5.6 | `Multiply()` (overloads) | Matrix and scalar multiplication |
| 5.9 | `solve3by3()` | Solve a 3×3 linear system |
| 5.10 | `gaussian_elimination()` | Gaussian elimination for n×n system |
