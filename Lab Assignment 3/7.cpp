// Matrix Inversion
#include <iostream>
using namespace std;

int main()
{
    double a[4][4], b[4][1], x[4][1];

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
        cin >> b[i][1];
    }

    double det_a = 0.0;

    det_a = a[1][1] * (a[2][2] * a[3][3] - a[2][3] * a[3][2])
            - a[1][2] * (a[2][1] * a[3][3] - a[2][3] * a[3][1])
            + a[1][3] * (a[2][1] * a[3][2] - a[2][2] * a[3][1]);

    cout << "Determinant of the matrix is: " << det_a << endl;

    double d[4][4]; // Cofactor
    d[1][1] = +(a[2][2] * a[3][3] - a[2][3] * a[3][2]);
    d[1][2] = -(a[2][1] * a[3][3] - a[2][3] * a[3][1]);
    d[1][3] = +(a[2][1] * a[3][2] - a[2][2] * a[3][1]);
    d[2][1] = -(a[1][2] * a[3][3] - a[1][3] * a[3][2]);
    d[2][2] = +(a[1][1] * a[3][3] - a[1][3] * a[3][1]);
    d[2][3] = -(a[1][1] * a[3][2] - a[1][2] * a[3][1]);
    d[3][1] = +(a[1][2] * a[2][3] - a[1][3] * a[2][2]);
    d[3][2] = -(a[1][1] * a[2][3] - a[1][3] * a[2][1]);
    d[3][3] = +(a[1][1] * a[2][2] - a[1][2] * a[2][1]);

    double adj_a[4][4]; // adjoint matrix
    adj_a[1][1] = d[1][1];
    adj_a[1][2] = d[2][1];
    adj_a[1][3] = d[3][1];
    adj_a[2][1] = d[1][2];
    adj_a[2][2] = d[2][2];
    adj_a[2][3] = d[3][2];
    adj_a[3][1] = d[1][3];
    adj_a[3][2] = d[2][3];
    adj_a[3][3] = d[3][3];

    double a_Inv[4][4]; // Inverse matrix
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            a_Inv[i][j] = adj_a[i][j] / det_a;
        }
    }

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 1; j++)
        {
            for (int k = 1; k <= 3; k++)
            {
                x[i][j] += a_Inv[i][k] * b[k][j];
            }
        }
    }

    cout << "Solution:" << endl;
    for(int i=1; i<=3; i++)
    {
        cout << "x[" << i << "] = " << x[i][1] << endl;
    }

    return 0;
}

