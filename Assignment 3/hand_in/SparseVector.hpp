#ifndef SPARSEVECTORHEADERDEF
#define SPARSEVECTORHEADERDEF

#include <vector>
#include <algorithm>
#include <cassert>

template<typename T>
class SparseVector
{
private:
    std::vector<int> mIndices;
    std::vector<T> mValues;
    int mSize;

public:
    SparseVector(int size) : mSize(size) {}

    SparseVector() : mSize(0) {}

    int size() const
    {
        return mSize;
    }

    T getValue(int index) const
    {
        assert(index >= 0 && index < mSize);
        auto it = std::lower_bound(mIndices.begin(), mIndices.end(), index);
        if (it != mIndices.end() && *it == index)
        {
            return mValues[std::distance(mIndices.begin(), it)];
        }
        return T();
    }

    void setValue(int index, T value)
    {
        assert(index >= 0 && index < mSize);
        auto it = std::lower_bound(mIndices.begin(), mIndices.end(), index);
        
        if (it != mIndices.end() && *it == index)
        {
            int pos = std::distance(mIndices.begin(), it);
            if (value == T())
            {
                mIndices.erase(it);
                mValues.erase(mValues.begin() + pos);
            }
            else
            {
                mValues[pos] = value;
            }
        }
        else if (value != T())
        {
            int pos = std::distance(mIndices.begin(), it);
            mIndices.insert(it, index);
            mValues.insert(mValues.begin() + pos, value);
        }
    }

    SparseVector operator+(const SparseVector& v) const
    {
        assert(mSize == v.mSize);
        SparseVector result(mSize);
        
        int i = 0, j = 0;
        while (i < (int)mIndices.size() && j < (int)v.mIndices.size())
        {
            if (mIndices[i] < v.mIndices[j])
            {
                result.setValue(mIndices[i], mValues[i]);
                i++;
            }
            else if (mIndices[i] > v.mIndices[j])
            {
                result.setValue(v.mIndices[j], v.mValues[j]);
                j++;
            }
            else
            {
                T sum = mValues[i] + v.mValues[j];
                if (sum != T())
                {
                    result.setValue(mIndices[i], sum);
                }
                i++;
                j++;
            }
        }
        
        while (i < (int)mIndices.size())
        {
            result.setValue(mIndices[i], mValues[i]);
            i++;
        }
        
        while (j < (int)v.mIndices.size())
        {
            result.setValue(v.mIndices[j], v.mValues[j]);
            j++;
        }
        
        return result;
    }

    SparseVector operator-(const SparseVector& v) const
    {
        assert(mSize == v.mSize);
        SparseVector result(mSize);
        
        int i = 0, j = 0;
        while (i < (int)mIndices.size() && j < (int)v.mIndices.size())
        {
            if (mIndices[i] < v.mIndices[j])
            {
                result.setValue(mIndices[i], mValues[i]);
                i++;
            }
            else if (mIndices[i] > v.mIndices[j])
            {
                result.setValue(v.mIndices[j], -v.mValues[j]);
                j++;
            }
            else
            {
                T diff = mValues[i] - v.mValues[j];
                if (diff != T())
                {
                    result.setValue(mIndices[i], diff);
                }
                i++;
                j++;
            }
        }
        
        while (i < (int)mIndices.size())
        {
            result.setValue(mIndices[i], mValues[i]);
            i++;
        }
        
        while (j < (int)v.mIndices.size())
        {
            result.setValue(v.mIndices[j], -v.mValues[j]);
            j++;
        }
        
        return result;
    }

    int getNonZeroCount() const
    {
        return mIndices.size();
    }

    int getIndex(int pos) const
    {
        assert(pos >= 0 && pos < (int)mIndices.size());
        return mIndices[pos];
    }

    T getValueAt(int pos) const
    {
        assert(pos >= 0 && pos < (int)mValues.size());
        return mValues[pos];
    }
};

#endif
