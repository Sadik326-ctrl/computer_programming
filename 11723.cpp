#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int j=0,R,N;
    //while (cin>>R>>N && R!=0 && N!=0)
    while (scanf("%d%d",&R,&N)==2 && R!=0 && N!=0)
    {
        j=j+1;
        if (N*27<R)
        {
            printf("Case %d: impossible\n",j);
        }
        else
        {
            /***
            n=0;
            int D=0;
            while (n<R)
            {
                n=N*(D+1);
                if (n>=R)
                    break;
                D=D+1;
            }
            printf("Case %d: %d\n",j,D);
            */
            printf("Case %d: %d\n",j,(--R)/N);
        }
    }
}
/*
R=8
N    D     n=(N*D)+1    R/n
5    0       1          8
5   1        6          1

z=(R-1)/N
*/
