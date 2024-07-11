#include<bits/stdc++.h>
using namespace std;

int determinant(int matrix[3][3]) {
    return matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
           matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
           matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
}

int main()
{
    ///Peace be with you.

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int A[3][3], b[3];

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> A[i][j];
            }
            cin >> b[i];
        }


        int detA = determinant(A);

        int A1[3][3], A2[3][3], A3[3][3];

        // A1 replace the first column with b
        for (int i = 0; i < 3; i++) {
            A1[i][0] = b[i];
            A1[i][1] = A[i][1];
            A1[i][2] = A[i][2];
        }

        // A2 replace the second column with b
        for (int i = 0; i < 3; i++) {
            A2[i][0] = A[i][0];
            A2[i][1] = b[i];
            A2[i][2] = A[i][2];
        }

        // A3 replace the third column with b
        for (int i = 0; i < 3; i++) {
            A3[i][0] = A[i][0];
            A3[i][1] = A[i][1];
            A3[i][2] = b[i];
        }

        int detA1 = determinant(A1);
        int detA2 = determinant(A2);
        int detA3 = determinant(A3);


        cout << detA1 << " " << detA2 << " " << detA3 << " " << detA << endl;


        if (detA != 0)
        {
            double x1 = (double)detA1 / detA;
            double x2 = (double)detA2 / detA;
            double x3 = (double)detA3 / detA;



            cout << "Unique solution: ";
            cout << fixed << setprecision(3) << ((abs(x1) < 0.0005) ? 0.000 : x1) << " " << ((abs(x2) < 0.0005) ? 0.000 : x2) << " " << ((abs(x3) < 0.0005) ? 0.000 : x3) << endl;
        }
        else
        {
            cout << "No unique solution" << endl;
        }


        if (i < n-1) {
            cout << endl;
        }
    }

    return 0;
}
