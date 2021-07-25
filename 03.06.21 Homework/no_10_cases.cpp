#include <bits/stdc++.h>
using namespace std;

int main()
{
    int asc;
    char character;
    cout<<"Enter the character: ";
    cin>>character;
    asc=int(character);
    if (asc>=65 & asc<=90)
    {
        asc=asc+32;
        cout<<endl<<"The smaller letter: ";
    }
    else
    {
        asc=asc-32;
        cout<<endl<<"The capital letter: ";
    }
    cout<<char(asc)<<endl;
}
