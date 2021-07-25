#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year,i;
    string choice;
    for (i=0; i==0;)
    {
        cout<<"Enter the year: ";
        cin>>year;
        if (year%100!=0)
        {
            if (year%4==0)
                cout<<endl<<"Yes, "<<year<<" is a leap year.";
            else
                cout<<endl<<"No, "<<year<<" isn't a leap year.";
        }
        else
        {
            if (year%400==0)
                cout<<endl<<"Yes, "<<year<<" is a leap year.";
            else
                cout<<endl<<"No, "<<year<<" isn't a leap year.";

        }
        cout<<endl<<endl<<"If you wish to exit, enter \"x\". Otherwise, enter anything else."<<endl;
        cin>>choice;
        if (choice=="x"|choice=="X")
        {
                cout<<endl<<"----------------------------------------------------------------------"<<endl<<"The End"<<endl;
                break;
        }
        else
            cout<<endl<<"----------------------------------------------------------------------"<<endl;


    }
}
