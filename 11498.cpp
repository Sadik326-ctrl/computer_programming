#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,m,x,y,k;
    cin>>k;
    while (k!=0)
    {
        cin>>n>>m;
        for (int i=0; i<k; i++)
        {
            cin>>x>>y;
            if (y-m==0 || x-n==0)
            {
                cout<<"divisa";
            }
            else if (y-m>0 )
            {
                if (x-n>0)
                    cout<<"NE";
                else
                    cout<<"NO";
            }
            else
            {
                if (x-n>0)
                    cout<<"SE";
                else
                    cout<<"SO";
            }
            cout<<endl;
        }
        cin>>k;
    }
}
