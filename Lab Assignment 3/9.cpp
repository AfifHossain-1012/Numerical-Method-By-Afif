#include <bits/stdc++.h>
using namespace std;


int main()
{
    ///Peace be with you.


    double a[5][5];
    double b[5];

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cin >> a[i][j];
        }
    }


    for (int i = 1; i <= 3; i++)
    {
        cin >> b[i];
    }


    for (int i = 1; i <= 3; i++)
    {
        int Pivot = i;

        double PivotValue = a[Pivot][Pivot];


        for (int j = i; j <= 3; j++)
        {
            a[i][j] /= PivotValue;
        }
        b[i] /= PivotValue;


        for (int j = 1; j <= 3; j++)
        {
            if (j != i)
            {
                double mul = a[j][i];
                for (int k = i; k <= 3; k++)
                {
                    a[j][k] -= mul * a[i][k];
                }
                b[j] -= mul * b[i];
            }
        }
    }


    for (int i = 1; i <= 3; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}

