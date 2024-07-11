#include<bits/stdc++.h>
using namespace std;

#define f(x) ((x*x*x*x*x) + (3*(x*x)) - 10) // x^5 + 3x^2 - 10 = 0
#define g(x) (sqrt(10 / ((x*x*x) + 3))) // x = sqrt(10 / (x^3 +3))


int main()
{
    ///Peace be with you.

    double x0 = 0.0, x1, tolerance = 0.0005;

    while(1)
    {
        x1 = g(x0);

        if (fabs(x1 - x0) < tolerance)
        {
            break;
        }
        else
        {
            x0 = x1;
        }
    }
    cout << "The value of root is = " << x1 <<endl;

    return 0;
}


