#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1,num2,gcd,i,low,high;
    cout<<"Enter the first integer: ";
    cin>>num1;
    cout<<"Enter the second integer: ";
    cin>>num2;
    if (num1>num2)
    {
        high=num1;
        low=num2;
    }
    else if (num1==num2)
    {
        high=num1;
        low=num1;
    }
    else
    {
        high=num2;
        low=num1;
    }
    for (int i=1; i<=low; i++)
    {
        if (high%i==0 & low%i==0)
        {
            gcd=i;
        }
    }
    cout<<endl<<endl<<"The GCD of "<<num1<<" and "<<num2<<" is "<<gcd<<endl;
}
