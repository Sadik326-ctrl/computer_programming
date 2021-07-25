#include <bits/stdc++.h>
using namespace std;


int main()
{
    for (int i=0;i==0;)
    {

        long long int cuts, slices;
        cin>>cuts;
        if (cuts>=0)
        {
            slices = 1 + ((cuts+1)*cuts)/2;
            cout<<slices<<endl;
        }
        else
            i=1;
    }
    return 0;
}
