#include <bits/stdC++.h>
using namespace std;

int main()
{
    float num1,num2,num3;
    string choice;
    for (int i=0; i<1; )
    {
        cout<<"Enter the first number: ";
        cin>>num1;
        cout<<endl<<"Enter the second number: ";
        cin>>num2;
        cout<<endl<<"Enter the last number: ";
        cin>>num3;
        float highest;
        cout<<endl<<"Result:"<<endl;
        if (num1>num2 & num1>num3)
            cout<<num1<<" is the highest"<<endl;

        else if (num2>num3 & num2>num1)
            cout<<num2<<" is the greatest"<<endl;

        else if (num3>num1 & num3>num2)
            cout<<num3<<" is the greatest"<<endl;

        else if (num1==num2 & num2==num3)
            cout<<"All the numbers are equal."<<endl;

        else if (num1==num2 & num2>num3)
            cout<<num1<<" is the greatest."<<endl;

        else if (num1==num3 & num3>num2)
            cout<<num1<<" is the greatest."<<endl;

        else if (num2==num3 & num2>num1)
            cout<<num2<<" is the greatest."<<endl;

        cout<<endl<<"If you wish to exit, enter \"x\". Otherwise, enter anything else."<<endl;
        cin>>choice;
        cout<<endl;

        if (choice=="x"|choice=="X")
        {
            i=1;
            cout<<endl<<"-----------------------------------------------------------------------------"<<endl<<"The End"<<endl;
        }
        else
            cout<<endl<<"-----------------------------------------------------------------------------"<<endl<<endl;
    }
}
