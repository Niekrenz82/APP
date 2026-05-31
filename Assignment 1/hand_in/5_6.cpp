#include "5_6.h"

// Matrix-Matrix multiplication
void Multiply(double **res, double **A, double **B, int ARows, int ACols, int BRows, int BCols)
{
    for (int i = 0; i < ARows; i++)
    {
        for (int j = 0; j < BCols; j++)
        {
            res[i][j] = 0.0;
            for (int k = 0; k < ACols; k++)
            {
                res[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Vector-Matrix multiplication (vector * matrix)
void Multiply(double *res, double *A, double **B, int ACols, int BRows, int BCols)
{
    for (int j = 0; j < BCols; j++)
    {
        res[j] = 0.0;
        for (int k = 0; k < ACols; k++)
        {
            res[j] += A[k] * B[k][j];
        }
    }
}

// Matrix-Vector multiplication (matrix * vector)
void Multiply(double *res, double **A, double *B, int ARows, int ACols, int BRows)
{
    for (int i = 0; i < ARows; i++)
    {
        res[i] = 0.0;
        for (int k = 0; k < ACols; k++)
        {
            res[i] += A[i][k] * B[k];
        }
    }
}

// Scalar-Matrix multiplication
void Multiply(double **res, double scalar, double **B, int BRows, int BCols)
{
    for (int i = 0; i < BRows; i++)
    {
        for (int j = 0; j < BCols; j++)
        {
            res[i][j] = scalar * B[i][j];
        }
    }
}

// Matrix-Scalar multiplication
void Multiply(double **res, double **B, double scalar, int BRows, int BCols)
{
    for (int i = 0; i < BRows; i++)
    {
        for (int j = 0; j < BCols; j++)
        {
            res[i][j] = B[i][j] * scalar;
        }
    }
}
