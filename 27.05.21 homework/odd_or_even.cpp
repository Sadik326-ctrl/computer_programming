#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test,i,j;
    string choice,cont;
    for (j=0;j==0;)
    {
    cout<<"Input test: ";
    cin>>test;
    cout<<"Enter \"odd\" or \"even\"."<<endl;
    cin>>choice;
    if (choice=="odd")
    {
        if (test>0)
        {
            for (i=1; i<=test; i=i+2)
            {
                cout<<i<<endl;

            }
        }
        else
        {
            for (i=-1; i>=test; i=i-2)
            {
                cout<<i<<endl;

            }
        }
    }
    else
        {

            i=0;

        if (test>0)
        {
            for (; i<=test; i=i+2)
            {
                cout<<i<<endl;

            }
        }
        else
        {
            for (; i>=test; i=i-2)
            {
                cout<<i<<endl;

            }
        }

        }
    cout<<endl<<endl<<"Enter \"x\" to exit. Otherwise, enter anything else to continue."<<endl;
    cin>>cont;
    if (cont=="x" |cont=="X" )
    {
        j=1;
    }
    else
    {
        cout<<endl<<endl<<"-------------------------------------------------------------------"<<endl<<endl<<endl;
    }
    }
    return 0;
}
