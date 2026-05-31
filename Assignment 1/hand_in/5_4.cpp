#include "5_4.h"
#include <cmath>

double calc_mean(double a[], int length)
{
    double sum = 0.0;
    for (int i = 0; i < length; i++)
    {
        sum += a[i];
    }
    return sum / length;
}

double calc_std(double a[], int length)
{
    if (length <= 1) return 0.0;
    
    double mean = calc_mean(a, length);
    double sum_sq_diff = 0.0;
    
    for (int i = 0; i < length; i++)
    {
        double diff = a[i] - mean;
        sum_sq_diff += diff * diff;
    }
    
    return std::sqrt(sum_sq_diff / (length - 1));
}
