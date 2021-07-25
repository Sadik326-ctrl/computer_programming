#include <bits/stdc++.h>
using namespace std;

int main()
{
    float hour,rate,gross,net,tax;
    string choice;
    for (int i=0; i==0;)
    {
        cout<<"Hour: ";
        cin>>hour;
        cout<<endl<<"Rate: ";
        cin>>rate;
        gross=hour*rate;
        if (gross>5000)
        {
            tax=0.05*gross;
            net=gross-tax;
        }
        else
            net=gross;
        cout<<endl<<"Gross Pay: "<<gross<<" Tk.";
        cout<<endl<<"Net Income: "<<net<<" Tk.";
        cout<<endl<<endl<<"If you wish to exit, enter \"x\". Otherwise, enter anything else."<<endl;
        cin>>choice;
        if (choice=="x"|choice=="X")
        {
            cout<<endl<<"-----------------------------------------------------------"<<endl<<endl<<"The End"<<endl;
            break;
        }
        else
            cout<<endl<<"-----------------------------------------------------------"<<endl<<endl;
    }
    return 0;
}
