// Trapezoidal
#include<bits/stdc++.h>
using namespace std;

#define f(x) log10(x)

int main()
{
    double a = 1, b = 5;
    double n = 8;
    double h = (b - a)/n;

    vector<double> y;

    for(double i = a; i <= b; i = i+h)
    {
        double ans = f(i);
        y.push_back(ans);
    }

    double sum1 = y[0] + y[n];
    double sum2 = 0.0;

    for(int i = 1; i < n; i++)
    {
        sum2 = sum2 + (2 * y[i]);
    }

    double area = (h/2) * (sum1 + sum2);

    cout << "The approximate area under the curve is: " <<  area << endl;

    return 0;
}



