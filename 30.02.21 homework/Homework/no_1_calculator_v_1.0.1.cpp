#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a,b,i;
    float result;
    string choice;
    char oper;
    for (i=0; i<1 ;)
    {
        cout<<"Please enter the calculation: "<<endl;
        cin>>a>>oper>>b;
        if (oper=='+')
        {
            cout<<endl<<"Result:\n"<<a <<" "<< oper <<" "<<b << " = ";
            result =a + b;
            cout<< result;

        }
        else if (oper == '-')
        {
            cout<< endl<<"Result:\n"<<a << " "<< oper<< " "<<b<< " = ";
            result =a - b;
            cout<< result;
        }
        else if (oper == '*')
        {
            cout<< endl<< "Result:\n"<<a << " "<<oper<<" "<<b<< " = ";
            result =a * b;
            cout<< result;
        }
        else if (oper == '/')
        {
            cout<< endl<< "Result:\n"<<a<<" "<<oper<<" "<<b<<" = ";
            result = (float)a / b;
            cout<<result;
        }
        else
        {
            cout<<endl<<"Error! Wrong operator used.";
        }
        cout<<endl<<endl<<"Press x to exit. Press anything else to continue."<<endl<<"Choice: ";
        cin>> choice;
        if (choice == "x" | choice == "X")
        {
            i++;
        }
        else
        {
            cout<< endl<< "Proceeding...\n-------------------------------------------------------------------------------\n";
        }
    }
    cout<< endl<<"--------------------------------------------------------------"<<endl<<"The End"<<endl;
}
