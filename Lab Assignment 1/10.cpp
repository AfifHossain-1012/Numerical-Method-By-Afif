#include<bits/stdc++.h>
using namespace std;

#define f(x) ((x*x*x) - (6*x) + 4) // x^3 - 6x + 4 = 0

int main()
{
    double a = -10.0, b = 10.0, del_x = 0.01, tolerance = 0.0005;

    cout << "Roots of the equation x^3 - 6x + 4 = 0" << endl;

    while (a < b)
    {
        double x1 = a, x2 = x1 + del_x, x0;
        double f1 = f(x1), f2 = f(x2), f0;

        if (f1 * f2 > 0)
        {
            a = x2;
            continue;
        }

        while(1)
        {
            if(fabs(x1 - x2) < tolerance)
            {
                break;
            }

            x0 = (x1 + x2) / 2;
            f0 = f(x0);

            if (f1 * f0 < 0)
            {
                x2 = x0;
                f2 = f0;
            }
            else
            {
                x1 = x0;
                f1 = f0;
            }
        }
        cout << "Root: " << (x1 + x2) / 2 << endl;

        if(x2 < b)
        {
            a = x2;
        }
    }

    return 0;
}
