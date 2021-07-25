#include <bits/stdc++.h>
using namespace std;

int main()
{
    int j=0,R,N,n=0,D=-1;
    while (cin>>R>>N && R!=0 && N!=0)
    {
        j=j+1;
        if (N*27<R)
        {
            printf("Case %d: impossible\n",j);
        }
        else
        {
            for (int D=1; D<=26; D++)
            {
                cout<<"D "<<D<<endl;
                n=N*D;
                if (n>=R)
                    break;
            }
            printf("Case %d: %d\n",j,D);
        }
    }
}
