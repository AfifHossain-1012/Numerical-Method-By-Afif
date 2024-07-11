#include<bits/stdc++.h>
using namespace std;

#define f(x) ((x*x*x) - (9*x) + 1) // x^3 - 9x + 1 = 0

int main()
{
    ///Peace be with you.

    double a = -1.0, b = 1.0, tolerance = 0.0005;

    double c;
    while(1)
    {
        if(fabs(a-b) < tolerance)
        {
            break;
        }

        c = (a+b)/2;
        if (f(c)*f(a) <0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
    }

    cout<<"The value of root is = "<< c <<endl;

    return 0;
}

