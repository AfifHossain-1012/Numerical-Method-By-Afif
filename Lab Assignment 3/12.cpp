// Gauss-Seidel Method
#include <iostream>
using namespace std;

int main()
{
    float a[10][10], b[10], x[10], y[10];
    int n = 0, m = 0, i = 0, j = 0;

    cout << "Enter the order of the matrix: ";
    cin >> n;


    cout << "Enter the elements of the A matrix:" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }


    cout << "Enter the elements of the B matrix:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> b[i];
    }


    cout << "\nEnter the number of iterations: ";
    cin >> m;


    while (m > 0)
    {
        for (i = 0; i < n; i++)
        {
            y[i] = (b[i] / a[i][i]);
            for (j = 0; j < n; j++)
            {
                if (j == i)
                {
                    continue;
                }
                y[i] = y[i] - ((a[i][j] / a[i][i]) * x[j]);
                x[i] = y[i];
            }
            cout << "x[" << i << "] = " << y[i] << "    ";
        }
        cout << "\n";
        m--;
    }


    return 0;
}


