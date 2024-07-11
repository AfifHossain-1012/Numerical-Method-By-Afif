#include<bits/stdc++.h>
using namespace std;

int main()
{
    ///Peace be with you.


    int y[5]= {150,392,1452,2366,9702};
    int x[5]= {5,7,11,13,21};

    vector<vector<int>> delX;
    vector<int> Y;

    Y= {150,392,1452,2366,9702};
    delX.push_back(Y);
    int j=1,k=0;


    while(1)
    {
        vector<int> temp;
        for(int i=0; i<delX[k].size()-1; i++)
        {
            int ans = ((delX[k][i+1])-delX[k][i])/(x[j+i]-x[i]);
            temp.push_back(ans);
        }

        delX.push_back(temp);
        k++;

        if(delX[k].size()==1)
        {
            break;
        }
        j++;
    }


    cout << "The Divided Difference Table of f(x): " << endl;

    for(int i=1; i<=k; i++)
    {
        cout << "del^" << i << ": ";
        for(int j=0; j<delX[i].size(); j++)
        {
            cout << delX[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
