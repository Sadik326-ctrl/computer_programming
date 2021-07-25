#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    double v,u,d, sqd, ft, fs, st, p, t;
    cin>>t;
    for (int i=0; i<t; i++)
    {
        cin>>d>>v>>u;
        sqd=u*u-v*v;
        if (sqd>0)
        {
            ft=d/u;
            fs=sqrt(sqd);
            st=d/fs;
            p=ft-st;
            if (p<0)
                p=p*-1;
            if (p==0)
            {
                printf("Case %d: can\'t determine\n",i+1);
            }
            else
                printf("Case %d: %.3lf\n",i+1,p);
            //printf("%.3lf\n",p);
            //printf("%2d\n",abs(-1));
            //printf("%d\n",abs(1));
            //printf("%2.3lf\n",fabs(-1.2));
            //printf("%2.3lf\n",fabs(1.2));

        }
        else
            printf("Case %d: can\'t determine\n",i+1);
    }

}
