#include<bits/stdc++.h>
using namespace std;

double f(double x)
{
    return x / (1 + x);
}


double trapezoidalRule(double a, double b, int n)
{
    double h = (b - a) / n;
    double sum = f(a) + f(b);

    for (int i = 1; i < n; i++)
    {
        sum =  sum +  (2 * f(a + i * h));
    }

    return (h / 2) * sum;
}


int main()
{
    double a = 0.0;  // Lower limit
    double b = 1.0;  // Upper limit
    int n = 6;  // interval

    double area = trapezoidalRule(a, b, n);

    cout << "Approximate area under the curve using trapezoidal rule: " << area << endl;

    return 0;
}

