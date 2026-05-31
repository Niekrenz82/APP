# Exercise 2.6: Newton-Raphson Method - Complete Guide

## What is a Header File?

A **header file** (`.h` or `.hpp`) is a file that contains:
- **Function declarations** (prototypes) - the name, parameters, and return type
- **Class definitions** 
- **Constants and type definitions**
- **Comments explaining what functions do**

It acts as an **interface** that tells other files what functions are available to use.

### Example:
```cpp
// 2_6.h - Header file
double newton_Raphson(double initialGuess, double epsilon, int maxIterations = 100);
```

This tells the compiler: "There is a function called `newton_Raphson` that takes three parameters and returns a double."

---

## File Structure

This solution has three files:

### 1. **2_6.h** (Header)
- Contains the function declaration
- Describes what the function does
- Uses `#ifndef` and `#define` guards to prevent duplicate includes

### 2. **2_6.cpp** (Implementation)
- Contains the actual function definition (the code)
- Includes the header with `#include "2_6.h"`
- Implements the Newton-Raphson algorithm

### 3. **main.cpp** (Test Program)
- Contains the `main()` function (entry point)
- Calls `newton_Raphson()` to test it
- Displays the results

---

## How to Compile and Run

**This course requires using the clang++ compiler. See the agent instructions in the repository root for installation details.**

### On Windows with clang++:

#### Step 1: Navigate to the test directory
```powershell
cd "C:\Users\cunie\Desktop\APP\Assignment 1\test"
```

#### Step 2: Compile all files into an executable
```powershell
clang++ -o newton_test.exe 2_6.cpp main.cpp
```

**Explanation:**
- `clang++` - the C++ compiler (LLVM Clang)
- `-o newton_test.exe` - output filename with `.exe` extension
- `2_6.cpp main.cpp` - source files to compile

#### Step 3: Run the executable
```powershell
.\newton_test.exe
```

---

### Complete Example (Windows PowerShell):

```powershell
# Navigate to test folder
cd "C:\Users\cunie\Desktop\APP\Assignment 1\test"

# Compile with clang++
clang++ -o newton_test.exe 2_6.cpp main.cpp

# Run
.\newton_test.exe
```

**All in one command:**
```powershell
cd "C:\Users\cunie\Desktop\APP\Assignment 1\test"; clang++ -o newton_test.exe 2_6.cpp main.cpp; .\newton_test.exe
```

---

### Alternative: On Linux/Mac with clang++:

```bash
cd ~/Desktop/APP/Assignment\ 1/test
clang++ -o newton_test 2_6.cpp main.cpp
./newton_test
```

---

## Understanding the Newton-Raphson Algorithm

### Mathematical Formula:

For a function f(x), the Newton-Raphson iteration is:

$$x_i = x_{i-1} - \frac{f(x_{i-1})}{f'(x_{i-1})}$$

### For this problem:
- **Function**: $f(x) = e^x + x^3 - 5$
- **Derivative**: $f'(x) = e^x + 3x^2$
- **Initial guess**: $x_0 = 0$
- **Tolerance**: Stop when $|x_i - x_{i-1}| < \epsilon = 10^{-7}$

### The code does:
1. Start with $x_0 = 0$
2. Loop up to 100 times:
   - Calculate $f(x_{previous})$ and $f'(x_{previous})$
   - Compute $x_{current} = x_{previous} - \frac{f(x_{previous})}{f'(x_{previous})}$
   - Print the iteration and change
   - Check if $|x_{current} - x_{previous}| < \epsilon$
   - If yes, stop and return the root
3. Return the final approximation

---

## Expected Output

When you run the program, you should see something like:

```
========================================
Newton-Raphson Method for f(x) = e^x + x^3 - 5
========================================

Initial guess x_0 = 0
Convergence tolerance epsilon = 1e-07
Maximum iterations = 100

Iteration 1: x = 1.25, |delta x| = 1.25
Iteration 2: x = 1.15967, |delta x| = 0.0903302
Iteration 3: x = 1.15435, |delta x| = 0.00532177
...
Iteration 12: x = 1.1551, |delta x| = 1.05769e-09

Converged after 12 iterations!

========================================
Result: x = 1.1551
========================================
Verification: f(x) = e^x + x^3 - 5 = -2.22045e-16
Expected: close to 0
```

The result is **very close to 0** (essentially zero, accounting for floating-point rounding errors).

---

## Troubleshooting

### Error: "g++ command not found"
- You need to install a C++ compiler
- On Windows: Install MinGW or use Windows Subsystem for Linux (WSL)
- On Mac: Install Xcode Command Line Tools: `xcode-select --install`

### Error: "Cannot find 2_6.h"
- Make sure you're in the correct directory
- Check that both `2_6.h` and `2_6.cpp` are in the same folder as `main.cpp`

### Compilation succeeds but program crashes
- Check that the input parameters are valid (epsilon > 0, etc.)

---

## Key Concepts Summary

| Concept | Explanation |
|---------|-------------|
| **Header file (.h)** | Declaration of functions, tells compiler what functions exist |
| **Source file (.cpp)** | Implementation of functions, actual code |
| **Compilation** | Converting source code to machine code using `g++` |
| **Linking** | Combining object files into an executable |
| **Executable** | The final program that can be run (`.exe` on Windows) |
