#include <bits/stdc++.h>
using namespace std;

int main()
{
    float value,i,result;
    string choice,cont;
    for (i=0; i<1;)
    {
        cout<<"Enter \"c\" to convert cm to inch.\nEnter \"i\" to convert inch to cm."<<endl;
        cin>>choice;
        if (choice=="c")
        {
            cout<< endl<<"Enter the value: ";
            cin>> value;
            result = value /2.54;
            cout<<endl<<value<<" cm = "<<result<<" inches.";
        }
        else if (choice=="i")
        {
            cout <<endl<<"Enter the value: ";
            cin>> value;
            result = value * 2.54;
            cout<<endl<<value<< " inches = "<<result<<" cm.";
        }
        else
        {
            cout<<"Incorrect choice entered.";
        }
        cout<<endl<<endl<<"Enter x to exit. Enter anything else to continue.\n";
        cin>>cont;
        if (cont=="x")
        {
            i=2;
            cout<<endl<<endl<<"The End."<<endl<<"-------------------------------------------------------------------";
        }
        else
        {
            cout<<endl<<endl<<"------------------------------------------------------------------"<<endl;
        }

    }
    return 0;
}
