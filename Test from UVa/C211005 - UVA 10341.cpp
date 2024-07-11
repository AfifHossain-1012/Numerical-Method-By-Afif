/*
─────────────────────────────────────────────────────────
─██████████████─██████████████─██████████─██████████████─
─██░░░░░░░░░░██─██░░░░░░░░░░██─██░░░░░░██─██░░░░░░░░░░██─
─██░░██████░░██─██░░██████████─████░░████─██░░██████████─
─██░░██──██░░██─██░░██───────────██░░██───██░░██─────────
─██░░██████░░██─██░░██████████───██░░██───██░░██████████─
─██░░░░░░░░░░██─██░░░░░░░░░░██───██░░██───██░░░░░░░░░░██─
─██░░██████░░██─██░░██████████───██░░██───██░░██████████─
─██░░██──██░░██─██░░██───────────██░░██───██░░██─────────
─██░░██──██░░██─██░░██─────────████░░████─██░░██─────────
─██░░██──██░░██─██░░██─────────██░░░░░░██─██░░██─────────
─██████──██████─██████─────────██████████─██████─────────
─────────────────────────────────────────────────────────
*/
#include<bits/stdc++.h>
using namespace std;
#define optimize()            \
ios_base::sync_with_stdio(0); \
cin.tie(0);                   \
cout.tie(0);
const int maxn = 2e5+10;


double f(double x, double p, double q, double r, double s, double t, double u)
{
    return p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;
}


double bisection(double p, double q, double r, double s, double t, double u)
{
    // f(0) = 1, f(1) = -1
    double A = 1.0, B = 0.0;
    double mid;

    while (fabs(A - B) >= 1e-9)
    {
        mid = (A + B) / 2.0;
        double value = f(mid, p, q, r, s, t, u);
        double valueA = f(A, p, q, r, s, t, u);
        double valueB = f(B, p, q, r, s, t, u);

        if ((value*valueA) < 0)
        {
            B = mid;
        }
        else
        {
            A = mid;
        }
    }

    return mid;
}
int main()
{
    ///Peace be with you.
    optimize();

    double p, q, r, s, t, u;

    while (cin >> p >> q >> r >> s >> t >> u)
    {
        double value0 = f(1.0, p, q, r, s, t, u);
        double value1 = f(0.0, p, q, r, s, t, u);


        if (value0*value1 < 0)
        {
            cout << setprecision(4) << bisection(p, q, r, s, t, u) << endl;
        }
        else
        {
            cout << "No solution" << endl;
        }
    }
    return 0;
}
