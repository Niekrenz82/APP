#ifndef VECTORHEADERDEF
#define VECTORHEADERDEF

#include <vector>
#include <cassert>
#include <cmath>
#include <algorithm>

template<typename T>
class Vector
{
private:
    std::vector<T> mData;
    int mSize;

public:
    Vector(int size)
    {
        assert(size > 0);
        mSize = size;
        mData.resize(mSize, T());
    }

    Vector() : mSize(0) {}

    int size() const
    {
        return mSize;
    }

    T& operator[](int i)
    {
        assert(i >= 0 && i < mSize);
        return mData[i];
    }

    const T& operator[](int i) const
    {
        assert(i >= 0 && i < mSize);
        return mData[i];
    }

    Vector& operator=(const Vector& otherVector)
    {
        assert(mSize == otherVector.mSize);
        mData = otherVector.mData;
        return *this;
    }

    Vector operator-() const
    {
        Vector v(mSize);
        for (int i = 0; i < mSize; i++)
        {
            v[i] = -mData[i];
        }
        return v;
    }

    Vector operator+(const Vector& v1) const
    {
        assert(mSize == v1.mSize);
        Vector v(mSize);
        for (int i = 0; i < mSize; i++)
        {
            v[i] = mData[i] + v1.mData[i];
        }
        return v;
    }

    Vector operator-(const Vector& v1) const
    {
        assert(mSize == v1.mSize);
        Vector v(mSize);
        for (int i = 0; i < mSize; i++)
        {
            v[i] = mData[i] - v1.mData[i];
        }
        return v;
    }

    Vector operator*(T a) const
    {
        Vector v(mSize);
        for (int i = 0; i < mSize; i++)
        {
            v[i] = a * mData[i];
        }
        return v;
    }

    double CalculateNorm(int p = 2) const
    {
        double sum = 0.0;
        for (int i = 0; i < mSize; i++)
        {
            sum += pow(std::abs(mData[i]), p);
        }
        return pow(sum, 1.0 / ((double)(p)));
    }

    const std::vector<T>& getStorage() const
    {
        return mData;
    }
};

#endif
