#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    float temp,result;
    string choice,cont;
    for (i=0; i==0;)
    {
        cout<<"Enter \"f\" to convert Farhenheit to Celcius.\nEnter \"c\" to convert Celcius to Farhenheit.\n";
        cin>>choice;
        if (choice=="c")
        {
            cout<<"Enter the temperature: ";
            cin>>temp;
            result = temp*9/5+32;
            cout<<endl<<"Result:\n"<<temp<< " Celcius = " <<result<<" Farhenheit.";
        }
        else if (choice=="f")
        {
            cout<<"Enter the temperature: ";
            cin>>temp;
            result = (temp-32)*5/9;
            cout<<endl<<"Result:\n"<<temp <<" Farhenheit = "<<result<<" Celcius.";
        }
        else
        {
            cout<<endl<<"Error: Wrong choice of letters."<<endl;
        }
        cout<<"\n\nEnter \"x\" to exit. Enter anything else to continue.\n";
        cin>>cont;
        if (cont=="x"|cont=="X")
        {
            i=1;
            cout<<endl<<"The End"<<endl;
        }
        else
        {
            cout<<endl<<"---------------------------------------------------------------------------------"<<endl;
        }
    }
    return 0;
}
