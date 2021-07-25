#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num,i, result=1;
    cout<<"Enter the number: ";
    cin>>num;
    for (i=1; i<=num; i++)
    {
        result = result*i;
    }
    cout<<endl<<endl<<"Factorial of "<<num<<" is "<<result<<"."<<endl<<endl;
}

//6! = 6 x 5 x 4 x 3 x 2 x 1;

//0! = 1
