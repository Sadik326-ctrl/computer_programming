#include <bits/stdc++.h>
using namespace std;

int fibo(int);

int main()
{
    int n, res;
    cout<<"Enter the number: ";
    cin>>n;
    res = fibo(n);
    cout<<endl<<"The Fibonacci number is "<<res<<"."<<endl;

}


int fibo (int n)
{
    if (n==1)
        return 0;
    else if (n==2)
        return 1;
    else
        return (fibo(n-1)+fibo(n-2));
}
