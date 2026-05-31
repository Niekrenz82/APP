#include "5_10.h"
#include <cmath>

void guassian_elimination(double **A, double *b, double *u, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int pivot_row = i;
        for (int k = i + 1; k < n; k++)
        {
            if (std::abs(A[k][i]) > std::abs(A[pivot_row][i]))
            {
                pivot_row = k;
            }
        }
        
        double *temp_row = A[i];
        A[i] = A[pivot_row];
        A[pivot_row] = temp_row;
        
        double temp_b = b[i];
        b[i] = b[pivot_row];
        b[pivot_row] = temp_b;
        
        for (int k = i + 1; k < n; k++)
        {
            double factor = A[k][i] / A[i][i];
            for (int j = i; j < n; j++)
            {
                A[k][j] -= factor * A[i][j];
            }
            b[k] -= factor * b[i];
        }
    }
    
    for (int i = n - 1; i >= 0; i--)
    {
        u[i] = b[i];
        for (int j = i + 1; j < n; j++)
        {
            u[i] -= A[i][j] * u[j];
        }
        u[i] /= A[i][i];
    }
}
