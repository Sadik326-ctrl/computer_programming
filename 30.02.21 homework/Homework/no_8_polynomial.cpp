#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    float x,y;
    string choice;
    for (i=0; i==0;)
    {
        cout<<"Enter the value of x: ";
        cin>>x;
        y=(x-1)/x+pow((x-1)/x,2)/2+pow((x-1)/x,3)/3+pow((x-1)/x,4)/4;
        cout<<endl<<"y = "<<y<<endl;
        cout<<endl<<"Press \"x\" to exit. Otherwise, enter anything else."<<endl;
        cin>>choice;
        if (choice=="x"|choice=="X")
        {
            i=1;
            cout<<endl<<"-------------------------------------------------------------------"<<endl<<"The End"<<endl;
        }
        else
        {
            cout<<endl<<"-------------------------------------------------------------------"<<endl<<endl;
        }
    }
    return 0;
}
