# Applied Programming with C++ — Assignment Overview

## Assignment 1: Numerical Methods & Pointers/Arrays

**Topic:** Basic C++ numerical algorithms and linear algebra operations.

**Exercises:** 2.6, 3.3, 5.3, 5.4, 5.6, 5.9, 5.10

| Exercise | Function(s) | Description |
|---|---|---|
| 2.6 | `newton_Raphson()` | Newton-Raphson root-finding method |
| 3.3 | `implicit_Euler()` | Solve ODE, output x/y pairs to `xy.dat` |
| 5.3 | `swap_pointer()`, `swap_ref()` | Swap values via pointer and reference |
| 5.4 | `calc_mean()`, `calc_std()` | Mean and standard deviation (guard div-by-zero when length=1) |
| 5.6 | `Multiply()` (overloads) | Matrix and scalar multiplication |
| 5.9 | `solve3by3()` | Solve a 3×3 linear system |
| 5.10 | `guassian_elimination()` | Gaussian elimination for n×n system |

**Deliverable:** `handin1.zip` — all `.cpp` files in a single directory. No `main()` allowed in source files.

---

## Assignment 2: Object-Oriented Programming

**Topic:** Classes, operator overloading, inheritance, templates, exception handling.

**Exercises:** 6.1.1–7, 6.2, 7.1, 8.2, 9.1

| Exercise | Class/Function | Description |
|---|---|---|
| 6.1.1–6 | `ComplexNumber` | Arithmetic, modulus, argument, power, conjugate, operator overloading |
| 6.1.7 | `CalculateExponential()` | Matrix exponential via summation (denominator = n!) |
| 6.2 | `Matrix2x2` | Determinant, inverse, operator overloading, scalar multiply |
| 7.1 | `Student` / `GraduateStudent` / `PhdStudent` | Inheritance hierarchy, virtual `MoneyOwed()` |
| 8.2 | `CalcAbs<T>()` | Template absolute value — implemented directly in header, no `.cpp` |
| 9.1 | `Exception` / `OutOfRangeException` / `FileNotOpenException` | Custom exception hierarchy |

**Deliverable:** `handin2.zip` — same structure as Assignment 1.

---

## Assignment 3: Templates & Standard Library

**Topic:** Refactor an existing linear algebra library to use templates and `std::vector`, then implement a sparse vector.

### Exercise 1 — Rewrite Linear Algebra Library
- Add template parameter: `Vector<T>` and `Matrix<T>` (supports `float`, `double`, `int`, `std::complex<double>`, …)
- Replace manual memory management with `std::vector<T>`
- Use row-major storage: element `A[i][j]` in an n×m matrix lives at index `i*m + j`
- Add `getStorage()` returning a const reference to the internal vector
- Remove manually written copy/move constructors — let the compiler generate them
- Write regression tests to confirm correctness before and after the refactor

### Exercise 2 — Sparse Vector
- `SparseVector` class: efficient storage for vectors with mostly zero elements
- Internal representation: two sorted `std::vector`s — one for indices, one for values
- Methods: `getValue()`, `setValue()`, addition, subtraction
- Use `std::lower_bound()` for index lookup and `std::vector::insert()` for insertion
- Keep indices sorted at all times

---

## Assignment 4: Armadillo — Classification Algorithms

**Topic:** Statistical machine learning using the [Armadillo](http://arma.sourceforge.net/docs.html) linear algebra library.

**Data files:** `dataX.dat` (features), `dataY.dat` (labels: +1 / −1), `dataXtest.dat` (test points)

### Exercise 1 — k-Nearest Neighbours (`NearestNeighbours.cpp`)
- k = 5
- For each test point: compute Euclidean distance to all training points, find 5 nearest, assign label by majority vote
- Output: `NN.dat` (one predicted label per row)

### Exercise 2 — Logistic Regression (`LogisticRegression.cpp`)
- Loss: L(w) = (1/N) Σ log(1 + exp(−yᵢ · wᵀxᵢ))
- Gradient: ∂L/∂w = −(1/N) Σ [yᵢ / (1 + exp(yᵢ · wᵀxᵢ))] · xᵢ
- Update: w ← w − α · ∂L/∂w
- Stop when ‖∂L/∂w‖ < ε = 10⁻⁷
- Classify: y = sign(wᵀx)
- Output: `LogReg.dat`

**Validation tip:** copy `dataX.dat` → `dataXtest.dat`; predicted labels should closely match `dataY.dat`.

---

## Quick Reference

| # | Topic | Key C++ Concepts | Deliverable |
|---|---|---|---|
| 1 | Numerical Methods | Functions, pointers, arrays | `handin1.zip` |
| 2 | OOP | Classes, inheritance, templates, exceptions | `handin2.zip` |
| 3 | Templates & STL | `template<T>`, `std::vector`, algorithms | (check spec) |
| 4 | Machine Learning | Armadillo, file I/O, matrix ops | `NN.dat`, `LogReg.dat` |

## Folder Structure

```
APP/
├── ASSIGNMENTS.md       ← this file
├── Assignment 1/
│   ├── material/
│   └── hand_in/
├── Assignment 2/
│   ├── material/
│   └── hand_in/
├── Assignment 3/
│   ├── material/
│   └── hand_in/
└── Assignment 4/
    ├── material/
    └── hand_in/
```
