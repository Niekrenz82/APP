# Assignment 3 - Templates & Standard Library

## Overview

Refactor an existing linear algebra library to use templates and `std::vector`, then implement a sparse vector class for efficient storage.

---

## Exercise 1: Rewrite Linear Algebra Library

Refactor the existing `Vector` and `Matrix` classes from Assignment material to use C++ templates and the Standard Template Library.

### Requirements:

1. **Template Parameters**: Add template parameter support to create:
   - `Vector<T>` class supporting various data types (`float`, `double`, `int`, `std::complex<double>`, etc.)
   - `Matrix<T>` class supporting the same data types

2. **Replace Manual Memory Management**: 
   - Replace all manual dynamic allocation (e.g., `new`, `delete`) with `std::vector<T>`
   - Remove the need for destructors that deallocate memory

3. **Row-Major Storage**:
   - Store the matrix in row-major format using a single `std::vector<T>`
   - For an n×m matrix, element `A[i][j]` is stored at index `i*m + j`
   - This ensures efficient memory layout and cache performance

4. **Add getStorage() Method**:
   - Implement a method that returns a const reference to the internal `std::vector<T>`
   - Allows read-only access to the underlying storage

5. **Compiler-Generated Constructors**:
   - Remove manually written copy constructors
   - Remove manually written move constructors  
   - Let the compiler automatically generate these using the default constructors

6. **Regression Testing**:
   - Write comprehensive tests to verify correctness
   - Compare results with the original non-templated implementation
   - Ensure all numerical operations produce identical results
   - Test edge cases and different data types

### Key Methods to Implement:

- Constructors (default, parameterized)
- Operator overloading (`[]`, `+`, `-`, `*`)
- Matrix/vector multiplication
- Element access and modification
- `getStorage()` method

---

## Exercise 2: Sparse Vector Class

Implement an efficient `SparseVector` class for vectors with mostly zero elements.

### Requirements:

1. **Internal Representation**:
   - Use two sorted `std::vector<T>` containers:
     - One vector for **indices** (the positions of non-zero elements)
     - One vector for **values** (the corresponding non-zero values)
   - Keep indices sorted at all times

2. **Core Methods**:
   - `getValue(int index)`: Retrieve a value at a given index
     - Return 0 if the index is not stored (implicit zero)
     - Use `std::lower_bound()` for efficient O(log n) lookup
   
   - `setValue(int index, T value)`: Set or update a value
     - If value is 0 and the index exists, remove it
     - If value is non-zero, insert or update it
     - Use `std::vector::insert()` to maintain sorted order
     - Use `std::lower_bound()` to find the insertion position

3. **Arithmetic Operations**:
   - Implement addition: `SparseVector + SparseVector`
   - Implement subtraction: `SparseVector - SparseVector`
   - These operations should maintain the sparse structure

4. **Efficiency Considerations**:
   - Avoid storing zero values
   - Use efficient algorithms for index lookup and insertion
   - Minimize memory overhead by only storing non-zero elements

### Example Usage:

```cpp
SparseVector<double> v(1000);  // Vector of size 1000
v.setValue(5, 3.14);           // Set v[5] = 3.14
v.setValue(100, 2.71);         // Set v[100] = 2.71
double val = v.getValue(5);    // Returns 3.14
double zero = v.getValue(50);  // Returns 0 (implicit)
```

---

## Deliverable

- **Templated Vector and Matrix classes** with all required methods
- **Sparse Vector class** with efficient storage and operations
- **Comprehensive test suite** validating all functionality
- Proper header files (`.hpp`) and implementation files (`.cpp`)

### Notes:

- Place all implementations in `Assignment 3/hand_in/`
- Ensure template definitions are in headers or use explicit instantiations
- Document the test cases and validation procedures
