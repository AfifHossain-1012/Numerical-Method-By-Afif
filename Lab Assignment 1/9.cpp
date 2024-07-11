#include <iostream>
using namespace std;

int main()
{
    ///Peace be with you.

    int degree = 3;
    int a[degree+1] = {-8, 10, -5, 1}; // x^3 - 5x^2 + 10x - 8 = 0
    int x = 2;

    int b[degree+1] = {};

    for(int i = degree-1; i >= 0; i--)
    {
        b[i] = a[i+1] + (b[i+1]*x);
    }

    cout << "Quotient Polynomial q(x) = ";
    for(int i = degree-1; i >= 0; i--)
    {
        if(b[i] < 0)
        {
            cout << " - " << abs(b[i]) << "x^" << i;
        }
        else if(b[i] > 0)
        {
            cout << " + " << abs(b[i]) << "x^" << i;
        }
    }
    cout << " = 0" << endl;

    return 0;
}


