// Cramer’s Rule
#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

double determinant(double mat[MAX_SIZE][MAX_SIZE], int n)
{
    double det = 0;

    det = mat[1][1] * (mat[2][2] * mat[3][3] - mat[2][3] * mat[3][2])
          - mat[1][2] * (mat[2][1] * mat[3][3] - mat[2][3] * mat[3][1])
          + mat[1][3] * (mat[2][1] * mat[3][2] - mat[2][2] * mat[3][1]);

    return det;
}

double Cramer_Determinant(int row, double A[MAX_SIZE][MAX_SIZE], double B[MAX_SIZE][1], int n)
{
    double original_A[n][n];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            original_A[i][j] = A[i][j];
        }
    }

    // Replace the specified row of A with B
    for (int i = 1; i <= n; i++)
    {
        A[i][row] = B[i][1];
    }

    // Calculate the determinant of the modified A matrix
    double det = determinant(A, n);


    // Restore the original A matrix
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            A[i][j] = original_A[i][j];
        }
    }

    return det;
}

int main()
{
    int n;
    cout << "Order of the matrix : ";
    cin >> n;
    double a[MAX_SIZE][MAX_SIZE], b[MAX_SIZE][1], x[MAX_SIZE][1];

    cout << "Enter the elements of the A matrix:" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Enter the elements of the B matrix:" << endl;
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i][1];
    }

    //cout << "Determinant of original A matrix: " << determinant(a, n) << endl;

    for (int row = 1; row <= n; row++)
    {
        double ans = Cramer_Determinant(row, a, b, n)/determinant(a, n);
        cout << "x[" << row << "]: " << ans << endl;
    }

    return 0;
}


