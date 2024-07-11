#include<bits/stdc++.h>
using namespace std;

#define f(x) ((x*x*x) - (6*x) + 4) // x^3 - 6x + 4
#define f2(x) ((3*x*x) - 6) // 3x^2 - 6


int main()
{
    ///Peace be with you.

    double x0 = 0.0, x1, tolerance = 0.0005;

    while(1)
    {
        x1 = (x0 - (f(x0)/f2(x0)));

        if (fabs(x1 - x0) < tolerance)
        {
            break;
        }
        else
        {
            x0 = x1;
        }
    }
    cout<<"The value of root is = "<< x1 <<endl;

    return 0;
}



