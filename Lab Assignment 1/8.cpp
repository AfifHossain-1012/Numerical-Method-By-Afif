#include<bits/stdc++.h>
using namespace std;

#define f(x) ((x*x*x) - (5*x*x) - 29) // x^3 - 5x^2 - 29

int main()
{
    ///Peace be with you.

    double x0 = 2.0, x1 = 4.0, x2, tolerance = 0.0005;

    while(1)
    {
        x2 = x0 - ((f(x0)*(x1-x0))/(f(x1)-f(x0)));

        if (fabs(x1 - x0) < tolerance)
        {
            break;
        }
        else
        {
            x0 = x1;
            x1 = x2;
        }
    }
    cout<<"The value of root is = "<< x2 <<endl;

    return 0;
}





