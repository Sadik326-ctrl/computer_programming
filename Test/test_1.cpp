#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    int z;
    while (cin>>x)
    {
        for (int i=0; i<4; i++)
        {
            z=int(x[i])-48;
            cout<<z;
        }
        cout<<endl;
    }
}
