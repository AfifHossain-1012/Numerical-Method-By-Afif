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


    double mul = (a[2][1] / a[1][1]) * (-1);

    a[2][1] += a[1][1] * mul;
    a[2][2] += a[1][2] * mul;
    a[2][3] += a[1][3] * mul;
    b[2] += b[1] * mul;

    mul = (a[3][1] / a[1][1]) * (-1);

    a[3][1] += a[1][1] * mul;
    a[3][2] += a[1][2] * mul;
    a[3][3] += a[1][3] * mul;
    b[3] += b[1] * mul;



    mul = a[3][2] / a[2][2] * (-1);

    a[3][2] += a[2][2] * mul;
    a[3][3] += a[2][3] * mul;
    b[3] += b[2] * mul;


    double z = b[3] / a[3][3];
    double y = (b[2] - (a[2][3] * z)) / a[2][2];
    double x = (b[1] - (a[1][3] * z + a[1][2] * y)) / a[1][1];

    cout << x << " " << y << " " << z << endl;

    return 0;
}
