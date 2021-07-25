#include <bits/stdc++.h>
using namespace std;

int main()
{
while (true)
{
    int flag=0, N;
    cout<<"Enter the value of N: ";
    cin>>N;
    if (N>0)
    {
        if (N==1 | N==0)
        {
            flag=0;

        }
        else if (N)
        {
            for (int i=2; i<N; i++)
            {
                if (N%i==0)
                {
                    flag=1;
                    break;
                }
            }

        }
        cout<<endl;
        if (flag==1)
        {
            cout<<N<<" is not a prime number.";
        }
        else
            cout<<N<<" is a prime number.";
    }
    else
        cout<<"Negative numbers are not prime numbers.";
    cout<<endl;
}
    return 0;
}
