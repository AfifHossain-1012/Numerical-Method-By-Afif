// Simpson’s 1/3
#include<bits/stdc++.h>
using namespace std;

#define f(x) exp(sin(x))
#define PI 3.1416

int main()
{
    double a = 0, b = PI/2;
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

    for(int i = 1; i < n; i = i+2)
    {
        sum2 = sum2 + (4 * y[i]);
    }

    for(int i = 2; i < n; i = i+2)
    {
        sum3 = sum3 + (2 * y[i]);
    }

    double area = (h/3) * (sum1 + sum2 + sum3);

    cout << "The approximate area under the curve is: " <<  area << endl;

    return 0;
}

