#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int N,T;
    cin>>T;
    for (int j=0; j<T; j++)
    {
       cin>>N;
       int m[N]={0};
       for (int i=0; i<N; i++)
       {
           cin>>m[i];
       }
       cout<<"Case "<<j+1<<": "<<m[(N+1)/2-1]<<endl;
    }
}
