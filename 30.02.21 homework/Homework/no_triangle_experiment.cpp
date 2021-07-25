#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    float a, b, c, s, area;
    string choice;
    for (i=0; i==0;)
    {
        cout<<"Enter the length of the first side of the triangle: ";
        cin>>a;
        cout<<endl<<"Enter the length of the second side of the triangle: ";
        cin>>b;
        cout<<endl<<"Enter the length of the third side of the triangle: ";
        cin>>c;
        s=(a+b+c)/2;
        cout<<endl;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<endl<<area;
        cout<<endl<<"Enter \"x\" to exit. Otherwise enter anything else."<<endl;
        cin>>choice;
        if (choice=="x"|choice=="X")
        {
            i=1;
            cout<<"------------------------------------------------------------------"<<endl<<endl<<"The End"<<endl;
        }
        else
        {
            cout<<"------------------------------------------------------------------"<<endl<<endl;
        }
    }
    return 0;
}
