#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    while (scanf("%d%d",&n,&k) && EOF)
    {
        if (k<=1)
            break;

        int store=0,buds=0,total=0;
        while (n>0)
        {
            total=total+n;
            buds=n+store;
            store=buds%k;
            n=buds/k;
        }
        printf("%d\n",total);
    }
}

/**
B    S    n   k
0    0    10  3
10   1     3
4    1     1
2    2     0
B    S    n   k   total
0    0    10  3   10
10   1     3        13
4   1   1           14
2   2   0
*/
