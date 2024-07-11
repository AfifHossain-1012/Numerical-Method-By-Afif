#include<bits/stdc++.h>
using namespace std;

#define f(x) ((x*x*x) - (x) + 2) // x^3 - x + 2

int main()
{
    ///Peace be with you.

    double x1 = 0.0, x2 = -2.0, x0, tolerance = 0.0005;

    while(1)
    {
        x0 = x1 - ((f(x1)*(x2-x1))/(f(x2)-f(x1)));

        if(fabs(x1-x2) < tolerance)
        {
            break;
        }

        if (f(x0)*f(x1) <0)
        {
            x2 = x0;
        }
        else
        {
            x1 = x0;
        }
    }
    cout<<"The value of root is = "<< x0 <<endl;

    return 0;
}




