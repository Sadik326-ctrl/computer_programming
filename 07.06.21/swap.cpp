#include <bits/stdc++.h>
using namespace std;

int main()
{
    int lena,lenb;
    string a, b;
    cout<<"Enter the first value: "<<endl;
    cin>>a;
    cout<<"Enter the second value: "<<endl;
    cin>>b;
    lena = a.size();
    lenb = b.size();
    a = a + b;
    b = a.substr(0,lena);
    a = a.substr(lena, lenb);
    cout<<"a : "<<a<<"\nb : "<<b;
    return 0;
}
