#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,k,j=0,n,i;
    int lis[98];
    for (k=0; k<98; k++)
        lis[k]=-1;
    scanf("%d",&x);
    while (x!=0)
    {
        lis[j]=x;
        scanf("%d",&x);
        j=j+1;
    }
    printf("PERFECTION OUTPUT\n");
    for (k=0; k<98; k++)
    {
        if (lis[k]<=0)
        {
            //cout<<lis[k]<<endl;
            break;
            //continue;
        }
        int num=1;
        n=lis[k];
        if (n%2!=0)
        {
            if (n>3)
            {
                for (i=3; i<=(n/3); i=i+1)
                {
                    if (n%i==0)
                    {
                        num=num+i;
                    }
                }
            }
            /**if (n%3==0 && n>3)
            {
                num=num+3;
                for (i=5; i<=(n/3)+1; i=i+2)
                {
                    if (n%i==0)
                    {
                        num=num+i;
                    }
                }
            }
            else
            {
                for (i=5; i<=(n/5)+1; i=i+2)
                {
                    if (n%i==0)
                    {
                        num=num+i;
                    }
                }
            }*/
        }
        else if (n%2==0 && n>2)
        {
            for (i=2; i<=(n/2); i++)
            {
                if (n%i==0)
                {
                    num=num+i;
                }
            }
        }
        if (n==1)
            num=0;
        /**int nm=(to_string(n)).length();
        for (int q=0;  q<(5-nm); q++)
        {
            cout<<" ";
        }*/
        if (num<n)
        {
            printf("%5d  DEFICIENT\n",n);
        }
        else if (n==num)
        {
            printf("%5d  PERFECT\n",n);
        }
        else
        {
            printf("%5d  ABUNDANT\n",n);
        }
    }
    printf("END OF OUTPUT\n");
}

/**
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,l,m,sum;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&n)==1)
    {
        if(n==0)
          break;
        sum=0;
        for(i=1;i<=n/2;i++)
        {
            if(n%i==0)
               sum=sum+i;
        }
        if(sum==n)
        {
            printf("%5d  PERFECT\n",n);
        }
        else if(sum<n)
        {
            printf("%5d  DEFICIENT\n",n);
        }
        else
        {
            printf("%5d  ABUNDANT\n",n);
        }
    }
    printf("END OF OUTPUT\n");
    return 0;
}
*/
