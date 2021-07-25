#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    cout<<"Enter the character: ";
    cin>>x;
    if ( x=='a' | x=='e' | x=='i' | x=='o' | x=='u' | x=='A' | x=='E' | x=='I' | x=='O' | x=='U' )
        cout<<endl<<x<<" is a vowel.";
    else
        cout<<endl<<x<<" is a consonant."<<endl;
    return 0;

}
