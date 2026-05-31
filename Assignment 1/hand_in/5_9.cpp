#include "5_9.h"
// Using the cramer's rule to solve the system of equations
void solve3by3(double **A, double *b, double *u)
{
    double det = A[0][0] * (A[1][1] * A[2][2] - A[1][2] * A[2][1])
               - A[0][1] * (A[1][0] * A[2][2] - A[1][2] * A[2][0])
               + A[0][2] * (A[1][0] * A[2][1] - A[1][1] * A[2][0]);
    
    double det_u0 = b[0] * (A[1][1] * A[2][2] - A[1][2] * A[2][1])
                  - A[0][1] * (b[1] * A[2][2] - A[1][2] * b[2])
                  + A[0][2] * (b[1] * A[2][1] - A[1][1] * b[2]);
    
    double det_u1 = A[0][0] * (b[1] * A[2][2] - A[1][2] * b[2])
                  - b[0] * (A[1][0] * A[2][2] - A[1][2] * A[2][0])
                  + A[0][2] * (A[1][0] * b[2] - b[1] * A[2][0]);
    
    double det_u2 = A[0][0] * (A[1][1] * b[2] - b[1] * A[2][1])
                  - A[0][1] * (A[1][0] * b[2] - b[1] * A[2][0])
                  + b[0] * (A[1][0] * A[2][1] - A[1][1] * A[2][0]);
    
    u[0] = det_u0 / det;
    u[1] = det_u1 / det;
    u[2] = det_u2 / det;
}
