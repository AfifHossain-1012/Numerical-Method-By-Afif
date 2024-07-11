#include <iostream>
using namespace std;

int main()
{
    ///Peace be with you.

    int Order = 3;
    int a[Order+1] = {1, -2, 5, 10}; // x^3 - 2x^2 + 5x + 10
    int x = 5;
    int p = a[0];

    for(int i = 1; i <= Order; i++)
    {
        p = x*p + a[i];
    }

    cout << p << endl;
    return 0;
}

