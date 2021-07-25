/// x*y=gcd(x,y)*lcm(x,y)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2, lcm=1,high,low;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<endl<<endl;
    if (num1<num2)
    {
        high=num2;
        low=num1;
    }
    else if (num1==num2)
    {
        high=num1;
        low=num2;
    }
    else
    {
        high=num1;
        low=num2;
    }
    for (int i=0; i==0;)
    {
        i=1;
        for (int j=2; j<=low; j++)
        {
            if (high%j==0 & low%j==0)
            {
                high=high/j;
                low=low/j;
                lcm=lcm*j;
                i=0;
                break;
            }
        }
    }
    lcm=lcm*low*high;
    cout<<endl<<endl<<"LCM: "<<lcm<<endl<<endl;
}
