#include <bits/stdc++.h>
using namespace std;

int stnum(string);
int main()
{
    string number;
    while (cin>>number)
    {
        int j = stnum(number);
        cout<<j<<endl;
    }

}

int stnum(string number)
{
    int z,len=number.size()-1;
    for ( int i=len; i>=0; i--)
    {
        z = z + (number[len-i]-48)*pow(10, i);
    }
    return z;
}
