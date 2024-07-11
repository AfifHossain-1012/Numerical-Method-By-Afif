// Simpson’s 3/8
#include<bits/stdc++.h>
using namespace std;

#define f(x) (x / (1 + x * x))

int main()
{
    double a = 0, b = 1;
    double n = 6;
    double h = (b-a)/n;

    vector<double> y;

    for(double i = a; i <= b; i = i+h)
    {
        double ans = f(i);
        y.push_back(ans);
    }

    double sum1 = y[0] + y[n];
    double sum2 = 0.0;
    double sum3 = 0.0;

    for(int i = 1; i < n; i++)
    {
        if(i%3 != 0)
        {
            sum2 = sum2 + (3 * y[i]);
        }
        else
        {
            sum3 = sum3 + (2 * y[i]);
        }
    }

    double area = ((3*h)/8) * (sum1 + sum2 + sum3);

    cout << "The approximate area under the curve is: " <<  area << endl;

    return 0;
}

