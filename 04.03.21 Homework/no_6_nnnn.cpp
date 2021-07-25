#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string choice;
    for (int k=0; k==0;)
    {
        cout<<"Enter the value of n: ";
        cin>>n;
        for (int i=1; i<=n; i++)
        {
            for (int j=1; j<=i; j++)
            {
                cout<<i;
            }
            cout<<endl;
        }
        cout<<endl<<endl<<"Gotta go? Enter \"x\". Wanna stay? Enter anything else"<<endl<<"Key: ";
        cin>>choice;
        if (choice=="x"|choice=="X")
        {
            cout<<endl<<endl<<"-------------------------------------------------------------"<<endl<<"Bye!"<<endl;
            k=1;
        }
        else
        {
            cout<<endl<<endl<<"-------------------------------------------------------------"<<endl<<"Welcome back!"<<endl;
        }
    }
    return 0;
}
