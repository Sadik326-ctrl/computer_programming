#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    while (scanf("%d%d",&n,&k)==2 && k>1)
    {
        //if (k<=1)
          //  break;
        int store=0,buds=0,total=n;
        while (n>=k)
        {
            total=total+(n/k);
            buds=n/k;
            store=n%k;
            n=buds+store;
        }
        printf("%d\n",total);
    }
}
