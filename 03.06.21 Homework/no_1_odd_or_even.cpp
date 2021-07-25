#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num,rem, i;
    string choice;
    for (i=0; i==0;)
    {
        cout<<"Enter the number: ";
        cin>>num;
        rem=num%2;
        if ((rem)!=0)
            cout<<endl<<num<<" is an odd number."<<endl;
        else
            cout<<endl<<num<<" is an even number."<<endl;
        cout<<endl<<"If you wish to exit, enter \"x\". Otherwise, enter anything else."<<endl;
        cin>>choice;
        if (choice=="x"|choice=="X"){
            i=1;
            cout<<endl<<"---------------------------------------------------------------"<<endl<<"Have a nice day!"<<endl;
        }
        else{
            cout<<endl<<"---------------------------------------------------------------"<<endl<<endl;
        }
    }
    return 0;
}
