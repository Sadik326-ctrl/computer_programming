#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x,y,z,total,avg;
    string choice;
    int i;
    for (i=0; i==0;)
    {
        cout<<"Enter the first mark: ";
        cin>>x;
        cout<<endl<<"Enter the second mark: ";
        cin>>y;
        cout<<endl<<"Enter the third mark: ";
        cin>>z;
        avg= (x+y+z)/3;
        total=(x+y+z);
        cout<<endl<<"Total: "<<total<<endl;
        cout<<"Average: "<<avg<<endl;
        cout<<endl<<"Press \"x\" to exit. Otherwise, press any other button."<<endl;
        cin>>choice;
        if (choice=="x"|choice=="X")
        {
            i=1;
            cout<<endl<<"------------------------------------------------------------------"<<endl<<"The End"<<endl;

        }
        else
        {
            cout<<endl<<"-------------------------------------------------------------------"<<endl;
        }
    }
    return 0;
}
