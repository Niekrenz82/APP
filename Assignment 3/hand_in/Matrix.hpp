#ifndef MATRIXHEADERDEF
#define MATRIXHEADERDEF

#include "Vector.hpp"
#include <vector>
#include <cassert>

template<typename T>
class Matrix
{
private:
    std::vector<T> mData;
    int mNumRows, mNumCols;

public:
    Matrix(int numRows, int numCols)
    {
        assert(numRows > 0);
        assert(numCols > 0);
        mNumRows = numRows;
        mNumCols = numCols;
        mData.resize(mNumRows * mNumCols, T());
    }

    Matrix() : mNumRows(0), mNumCols(0) {}

    int GetNumberOfRows() const
    {
        return mNumRows;
    }

    int GetNumberOfColumns() const
    {
        return mNumCols;
    }

    T& operator()(int i, int j)
    {
        assert(i >= 0 && i < mNumRows);
        assert(j >= 0 && j < mNumCols);
        return mData[i * mNumCols + j];
    }

    const T& operator()(int i, int j) const
    {
        assert(i >= 0 && i < mNumRows);
        assert(j >= 0 && j < mNumCols);
        return mData[i * mNumCols + j];
    }

    Matrix& operator=(const Matrix& otherMatrix)
    {
        assert(mNumRows == otherMatrix.mNumRows);
        assert(mNumCols == otherMatrix.mNumCols);
        mData = otherMatrix.mData;
        return *this;
    }

    Matrix operator-() const
    {
        Matrix mat(mNumRows, mNumCols);
        for (int i = 0; i < mNumRows; i++)
        {
            for (int j = 0; j < mNumCols; j++)
            {
                mat(i, j) = -(*this)(i, j);
            }
        }
        return mat;
    }

    Matrix operator+(const Matrix& m1) const
    {
        assert(mNumRows == m1.mNumRows);
        assert(mNumCols == m1.mNumCols);
        Matrix mat(mNumRows, mNumCols);
        for (int i = 0; i < mNumRows; i++)
        {
            for (int j = 0; j < mNumCols; j++)
            {
                mat(i, j) = (*this)(i, j) + m1(i, j);
            }
        }
        return mat;
    }

    Matrix operator-(const Matrix& m1) const
    {
        assert(mNumRows == m1.mNumRows);
        assert(mNumCols == m1.mNumCols);
        Matrix mat(mNumRows, mNumCols);
        for (int i = 0; i < mNumRows; i++)
        {
            for (int j = 0; j < mNumCols; j++)
            {
                mat(i, j) = (*this)(i, j) - m1(i, j);
            }
        }
        return mat;
    }

    Matrix operator*(T a) const
    {
        Matrix mat(mNumRows, mNumCols);
        for (int i = 0; i < mNumRows; i++)
        {
            for (int j = 0; j < mNumCols; j++)
            {
                mat(i, j) = a * (*this)(i, j);
            }
        }
        return mat;
    }

    const std::vector<T>& getStorage() const
    {
        return mData;
    }
};

template<typename T>
Vector<T> operator*(const Matrix<T>& m, const Vector<T>& v)
{
    assert(m.GetNumberOfColumns() == v.size());
    Vector<T> new_vector(m.GetNumberOfRows());
    for (int i = 0; i < m.GetNumberOfRows(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            new_vector[i] += m(i, j) * v[j];
        }
    }
    return new_vector;
}

template<typename T>
Vector<T> operator*(const Vector<T>& v, const Matrix<T>& m)
{
    assert(m.GetNumberOfRows() == v.size());
    Vector<T> new_vector(m.GetNumberOfColumns());
    for (int i = 0; i < m.GetNumberOfColumns(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            new_vector[i] += v[j] * m(j, i);
        }
    }
    return new_vector;
}

#endif
