#include<bits/stdc++.h>
using namespace std;

int trapCheck(int n, string c)
{
    int fontDigit = 0;
    int backDigit = 0;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(c[i] == '1' || c[i] == '2' || c[i] == '3' || c[i] == '4' || c[i] == '5' || c[i] == '6' || c[i] == '7' || c[i] == '8' || c[i] == '9')
        {
            fontDigit++;
            //cout << "TP f" << fontDigit << endl;
        }
    }
    for(int i = n; i < c.size() ; i++)
    {
        if(c[i] == '1' || c[i] == '2' || c[i] == '3' || c[i] == '4' || c[i] == '5' || c[i] == '6' || c[i] == '7' || c[i] == '8' || c[i] == '9')
        {
            backDigit++;
            //cout << "TP b" << backDigit << endl;
        }
    }

    if(fontDigit > 0 && backDigit > 0)
    {
        ans = 1;
    }
    //cout << "TP ans" << ans << endl;

    return ans;
}

int endCheck(int n, string c)
{
    int fontDigit = 0;
    int backDigit = 0;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(c[i] == '1' || c[i] == '2' || c[i] == '3' || c[i] == '4' || c[i] == '5' || c[i] == '6' || c[i] == '7' || c[i] == '8' || c[i] == '9')
        {
            fontDigit++;
            //cout << "TR f" << fontDigit << endl;
        }
    }
    for(int i = n; i < c.size() ; i++)
    {
        if(c[i] == '1' || c[i] == '2' || c[i] == '3' || c[i] == '4' || c[i] == '5' || c[i] == '6' || c[i] == '7' || c[i] == '8' || c[i] == '9')
        {
            backDigit++;
            //cout << "TR b" << backDigit << endl;
        }
    }

    if(fontDigit > 0 && backDigit == 0)
    {
        ans = 1;
    }
    //cout << "TR ans" << ans << endl;

    return ans;
}

int startCheck(int n, string c)
{
    int fontDigit = 0;
    int backDigit = 0;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(c[i] == '1' || c[i] == '2' || c[i] == '3' || c[i] == '4' || c[i] == '5' || c[i] == '6' || c[i] == '7' || c[i] == '8' || c[i] == '9')
        {
            fontDigit++;
            //cout << "LE f" << fontDigit << endl;
        }
    }
    for(int i = n; i < c.size() ; i++)
    {
        if(c[i] == '1' || c[i] == '2' || c[i] == '3' || c[i] == '4' || c[i] == '5' || c[i] == '6' || c[i] == '7' || c[i] == '8' || c[i] == '9')
        {
            backDigit++;
            //cout << "LE b" << backDigit << endl;
        }
    }

    if(fontDigit == 0 && backDigit > 1)
    {
        ans = 1;
    }
    //cout << "LE ans" << ans << endl;

    return ans;
}


int countSignificantFigures(string c)
{
    /*for (int i=0;i<c.size();i++)
    {
        cout << c[i] ;
    }
    cout << endl;*/

    int count = 0;
    int trappedZeros = 0, leadingZeros = 0, trailingZeros = 0, trail = 0;

    bool counting = false;

    // Iterate through each character in the string
    for (int i = 0; i < c.size(); i++)
    {
        if (c[i] == '1' || c[i] == '2' || c[i] == '3' || c[i] == '4' || c[i] == '5' || c[i] == '6' || c[i] == '7' || c[i] == '8' || c[i] == '9')
        {
            //cout << c[i] << endl;
            //cout << count << endl;
            count++;
            //cout << count << endl;
        }
        else if (c[i] == '.')
        {
            // Decimal point encountered, reset counting flag
            counting = true;
        }
        else if (c[i] == '0')
        {
            //cout << c[i] << endl;
            if (trapCheck(i, c) == 1)
            {
                trappedZeros++;
                //cout << "TP" << trappedZeros << endl;
            }
            else if(endCheck(i, c) == 1)
            {
                trailingZeros++;
                //cout << "TR" << trailingZeros << endl;
            }
            else if(startCheck(i, c) == 1)
            {
                leadingZeros++;
                //cout << "LE" << leadingZeros << endl;
            }
        }

    }

    int ans;
    if(counting)
    {
        ans = count + trappedZeros + trailingZeros;
    }
    else
    {
        ans = count + trappedZeros + trail;
    }

    return ans;
}

int main()
{
    ///Peace be with you.
    //optimize();

    string number;
    cout << "Enter a number: ";
    getline(cin, number);

    int significantDigits = countSignificantFigures(number);
    cout << "The number of significant digits is: " << significantDigits << endl;

    return 0;
}

