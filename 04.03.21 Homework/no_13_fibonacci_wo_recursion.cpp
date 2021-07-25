#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,num1,num2,num3;
    cout<<"Enter the number: ";
    cin>>n;
    cin>>num1;
    cin>>num2;
    if (num1==1)
    {
        num3=num1;
    }
    else if (n==2)
    {
        num3=num2;
    }
    else
        for (int i=2; i<=n; i++)
        {
            num3=num1+num2;
            num1=num2;
            num2=num3;
        }
    cout<<endl<<endl<<"The "<<n<<"th Fibonacci number is, "<<num3<<"."<<endl;
}

//0 1 1 2 3 5 8 13...

///1 1 2 3 5 8 13

///4 3 7 10 17 27 44 71...
