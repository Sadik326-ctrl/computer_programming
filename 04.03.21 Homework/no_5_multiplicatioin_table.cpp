#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x;
    string choice;
    for (int j=0; j==0; )
    {
        cout<<"Enter the number: ";
        cin>>x;
        cout<<endl<<endl;
        for (int i=1; i<=10; i++)
        {
            cout<<endl<<x<<"*"<<i<<" = "<<x*i<<endl;
        }
        cout<<endl;
        cout<<endl<<"Gotta go? Enter \"x\". Otherwise, enter anything else."<<endl<<"Key: ";
        cin>>choice;
        if (choice=="x"|choice=="X")
        {
            cout<<endl<<endl<<"----------------------------------------------------------------"<<endl<<"End of the line"<<endl;
            j=1;
        }
        else
        {
            cout<<endl<<endl<<"----------------------------------------------------------------"<<endl;
        }
    }
    return 0;
}
