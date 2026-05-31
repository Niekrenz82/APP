#include "3_3.h"
#include <fstream>
#include <cassert>

void implicit_Euler(int n)
{
    int N = n;
    assert(N > 1);
    
    double h = 1.0 / (N - 1);
    
    std::ofstream outfile("xy.dat");
    assert(outfile.is_open());
    
    double x = 0.0;
    double y = 1.0;
    outfile << x << "," << y << "\n";
    
    for (int i = 1; i < N; i++)
    {
        x = i * h;
        y /= (1.0 + h);
        outfile << x << "," << y << "\n";
    }
    
    outfile.close();
}
