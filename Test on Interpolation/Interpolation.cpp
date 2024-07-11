#include <bits/stdc++.h>
using namespace std;

int main()
{
    ///Peace be with you.


    vector<int> x = {1, 2, 3, 4, 5};
    vector<int> y = {1, 8, 27, 64, 125};
    int n = y.size();


    vector<vector<int>> table(n, vector<int>(n));


    for (int i = 0; i < n; ++i)
    {
        table[i][0] = y[i];
    }

    // 00
    //    01
    // 10    02
    //    11    03
    // 20    12    04
    //    21    13
    // 30    22
    //    31
    // 40

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
            cout << table[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

