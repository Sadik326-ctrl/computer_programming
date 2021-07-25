#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter the value of m: ";
    cin>>m;
    cout<<endl<<"Enter the value of n: ";
    cin>>n;
    if (m<n)
    {
        for (; m<=n; m++)
        {
            cout<<endl<<m<<endl;
        }
    }
    else if (m==n)
    {
        cout<<endl<<m<<endl;
    }
    else
    {
        for (; m>=n; m--)
        {
            cout<<endl<<m<<endl;
        }
    }
    return 0;
}
