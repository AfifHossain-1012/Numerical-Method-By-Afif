// Jacobi,s Method
#include <iostream>
using namespace std;

int main()
{
    double a[5][5];
    double b[5];
    double x, y, z;

    cout << "Enter the elements of the A matrix:" << endl;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Enter the elements of the B matrix:" << endl;
    for (int i = 1; i <= 3; i++)
    {
        cin >> b[i];
    }

    x = 0;
    y = 0;
    z = 0;

    // Jacobi method
    double x1, y1, z1;
    do
    {
        x1 = x;
        y1 = y;
        z1 = z;

        x = (b[1] - a[1][3] * z - a[1][2] * y) / a[1][1];
        y = (b[2] - a[2][3] * z - a[2][1] * x) / a[2][2];
        z = (b[3] - a[3][1] * x - a[3][2] * y) / a[3][3];
    }
    while (abs(x1 - x) > 0.001 || abs(y1 - y) > 0.001 || abs(z1 - z) > 0.001);


    cout << "Solution: " << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    return 0;
}


