# Assignment 4 - Armadillo & Machine Learning

## Overview

Implement machine learning classification algorithms using the Armadillo linear algebra library. You will work with provided datasets to build k-Nearest Neighbours and Logistic Regression classifiers.

---

## Data Files

The assignment uses three data files (provided in the material folder):

- **`dataX.dat`**: Feature matrix (training points)
  - Each row is a training sample
  - Each column is a feature dimension
  
- **`dataY.dat`**: Label vector (training labels)
  - Each value is either **+1** or **−1** (binary classification)
  - Corresponds row-by-row to samples in `dataX.dat`
  
- **`dataXtest.dat`**: Feature matrix (test points)
  - Each row is a test sample to classify
  - Same number of columns as `dataX.dat`

---

## Exercise 1: k-Nearest Neighbours (kNN)

Implement a k-Nearest Neighbours classifier with k = 5.

### Algorithm:

1. **For each test point**:
   - Compute the **Euclidean distance** to all training points:
     $$d(\mathbf{x}_{\text{test}}, \mathbf{x}_i) = \sqrt{\sum_{j} (x_{\text{test},j} - x_{i,j})^2}$$
   
   - Find the **5 nearest neighbors** (smallest distances)
   
   - Assign the label by **majority vote**:
     - Count labels among the 5 neighbors
     - Assign the label that appears most frequently
     - In case of tie, use the label of the closest neighbor

2. **Output**: Write predicted labels to **`NN.dat`**
   - One predicted label per row (either **+1** or **−1**)
   - Same number of rows as test points in `dataXtest.dat`

### Implementation Notes:

- Use Armadillo functions for distance computation
- Consider efficiency: use Euclidean distance formulas that minimize computation
- Handle edge cases (fewer than 5 neighbors if needed)

### File: `NearestNeighbours.cpp`

```cpp
// Pseudocode structure:
// 1. Load dataX, dataY, dataXtest from files
// 2. For each test point:
//    - Compute distances to all training points
//    - Find 5 nearest neighbors
//    - Perform majority vote
//    - Store predicted label
// 3. Save predictions to NN.dat
```

---

## Exercise 2: Logistic Regression

Implement a logistic regression classifier using gradient descent optimization.

### Mathematical Formulation:

**Loss Function:**
$$L(\mathbf{w}) = \frac{1}{N} \sum_{i=1}^{N} \log\left(1 + \exp(-y_i \mathbf{w}^T \mathbf{x}_i)\right)$$

where:
- $\mathbf{w}$ is the weight vector
- $N$ is the number of training samples
- $y_i \in \{+1, -1\}$ is the label
- $\mathbf{x}_i$ is the feature vector

**Gradient:**
$$\frac{\partial L}{\partial \mathbf{w}} = -\frac{1}{N} \sum_{i=1}^{N} \frac{y_i}{1 + \exp(y_i \mathbf{w}^T \mathbf{x}_i)} \mathbf{x}_i$$

**Update Rule (Gradient Descent):**
$$\mathbf{w} \leftarrow \mathbf{w} - \alpha \frac{\partial L}{\partial \mathbf{w}}$$

where $\alpha$ is the learning rate (typically 0.01 to 0.1).

### Algorithm:

1. **Initialize**: Start with $\mathbf{w} = \mathbf{0}$ (zero vector)

2. **Iterative Optimization**:
   - Compute the gradient: $\frac{\partial L}{\partial \mathbf{w}}$
   - Update weights: $\mathbf{w} \leftarrow \mathbf{w} - \alpha \frac{\partial L}{\partial \mathbf{w}}$
   
3. **Stopping Condition**:
   - Stop when $\left\|\frac{\partial L}{\partial \mathbf{w}}\right\| < \epsilon = 10^{-7}$
   - Or after a maximum number of iterations (e.g., 10,000)

4. **Classification**:
   - For each test point: $y_{\text{pred}} = \text{sign}(\mathbf{w}^T \mathbf{x})$
   - Output **+1** if $\mathbf{w}^T \mathbf{x} > 0$, else **−1**

5. **Output**: Write predicted labels to **`LogReg.dat`**
   - One predicted label per row (either **+1** or **−1**)
   - Same number of rows as test points in `dataXtest.dat`

### Implementation Notes:

- Use Armadillo for efficient matrix/vector operations
- Compute the gradient efficiently: vectorize operations, avoid loops where possible
- Use Euclidean norm (`arma::norm()`) to compute gradient magnitude
- Monitor convergence by tracking loss or gradient norm over iterations
- Choose an appropriate learning rate (experiment if needed)

### File: `LogisticRegression.cpp`

```cpp
// Pseudocode structure:
// 1. Load dataX, dataY, dataXtest from files
// 2. Initialize w = zeros(num_features)
// 3. Loop until convergence:
//    - Compute gradient
//    - Check stopping condition (||gradient|| < epsilon)
//    - Update weights: w = w - alpha * gradient
// 4. For each test point:
//    - Compute prediction: sign(w^T * x)
//    - Store predicted label
// 5. Save predictions to LogReg.dat
```

---

## Validation

### Validation Tip:

To verify your implementations are working correctly:

1. **Copy training data to test data**: `cp dataX.dat dataXtest.dat`
2. **Run both classifiers** on this copied data
3. **Predicted labels should match training labels** in `dataY.dat`
   - kNN should give very accurate predictions (possibly 100%)
   - Logistic Regression should also give good predictions
   - Large discrepancies indicate bugs in the implementation

---

## Deliverable

**Files to submit:**
- `NearestNeighbours.cpp`: Complete kNN implementation
- `LogisticRegression.cpp`: Complete logistic regression implementation
- Output files: `NN.dat` and `LogReg.dat` (predictions on the provided test set)

### Requirements:

- Use Armadillo library for all matrix/vector operations
- Read data from `.dat` files using Armadillo's `load()` function
- Write predictions to `.dat` files using Armadillo's `save()` function
- Implement efficient algorithms without unnecessary loops
- Handle edge cases and potential numerical issues (e.g., overflow in exp)

### Notes:

- Place all implementations in `Assignment 4/hand_in/`
- Ensure proper file I/O and error handling
- Test with the provided data and validation procedure
