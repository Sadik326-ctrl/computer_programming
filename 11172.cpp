#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long long int n1, n2;
    cin>>t;
    for (int i=0; i<t; i++)
    {
        cin>>n1>>n2;
        if (n1==n2)
        {
            cout<<"=";
        }
        else if (n1>n2)
        {
            cout<<">";
        }
        else
        {
            cout<<"<";
        }
        cout<<endl;
    }
}
