#include <bits/stdc++.h>
using namespace std;

int f(int);

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<endl<<"The factorial of "<<num<<" is "<<f(num)<<endl;
}

int f(int num)
{
    if (num>0)
    {
        return (num*f(num-1));
    }
    else
        return 1;
}
