#include<bits/stdc++.h>
using namespace std;

int main()
{
    ///Peace be with you.

    string number;
    string output = "";
    cout << "Enter the number: ";
    getline(cin, number);

    int n;
    cout << "Enter Nth significant value: ";
    cin >> n;

    int decPoint;

    for (int i = 0; i < number.size(); i++)
    {
        if(number[i] == '.')
        {
            decPoint = i+1;
            //cout << decPoint << endl;
            break;
        }
    }

    int End = decPoint + n;
    //cout << End << endl;

    string result = "";
    for(int i = 0; i < End; i++)
    {
        result += number[i];
        //cout << result << endl;
    }
    //cout << result << endl;

    int count = 0;

    if((number[End] - '0') < 5)
    {
        result[End - 1] = number[End - 1];
    }
    else if((number[End] - '0') > 5)
    {
        int ans = (number[End - 1] - '0') + 1;
        //cout << ans << endl;
        string change = to_string(ans);
        //cout << change << endl;
        result.replace(End - 1, result[End - 1], change);
    }
    else if((number[End] - '0') == 5)
    {
        if((number[End - 1] - '0') % 2 == 0)
        {
            result[End - 1] = number[End - 1];
        }
        else
        {
            int ans = (number[End - 1] - '0') + 1;
            //cout << ans << endl;
            string change = to_string(ans);
            //cout << change << endl;
            result.replace(End - 1, result[End - 1], change);
        }
    }


    cout << "Round off number: " << result << endl;

    return 0;
}

