#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r=[98],x,j=0;
    scanf("%d",&x);
    while (x!=0)
    {
        scanf("%d",&x);
        r[j]=x;
        j=j+1;
    }
    for (int k=0; k<j+1; k++)
    {
        int n, num=0;
        for (int i=; i<=(n/2)+1; i++)
        {
            if (n%i==0)
            {
                if (n/i<i)
                {
                    break;
                }
                else
                {
                    num=num+i;
                }
            }
        }
    }
}
