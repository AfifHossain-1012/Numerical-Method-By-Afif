// Numerical Differentiation
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ///Peace be with you.


    vector<double> x = {1, 2, 3, 4, 5};
    vector<double> y = {1, 8, 27, 64, 125};
    double GivenX = 1;
    int n = y.size();

    vector<vector<double>> table(n, vector<double>(n));

    double h = x[1] - x[0];
    double u = (GivenX - x[0])/h;

    for (int i = 0; i < n; ++i)
    {
        table[i][0] = y[i];
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            table[j][i] = table[j + 1][i - 1] - table[j][i - 1];
        }
    }

    cout << "Difference Table:" << endl;
    cout << "0Y0" << "\t";
    for (int i = 1; i < n; i++)
    {
        cout << i << "Y0" << "\t";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            //cout << i << j << " = " ;
            cout << table[i][j] << "\t";
        }
        cout << endl;
    }



    double first_derivative = (1.00/h) * ( table[0][1] + (2*u-1)/2 * table[0][2] + (3*u*u-6*u+2)/(2*3) * table[0][3]);
    double second_derivative = (1.00/h*h) * ( table[0][2] + (u-1) * table[0][3] + (6*u*u-18*u+11)/12 * table[0][4]);


    cout << endl;
    cout << "First Derivative: " << first_derivative << endl;
    cout << "Second Derivative: " << second_derivative << endl;

    return 0;
}

