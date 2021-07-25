#include <bits/stdc++.h>
using namespace std;

int main()
{   string choice;
    int num,first,last,i,j;
    for (j=0;j==0;)
    {

    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Enter the starting multiple: ";
    cin>>first;
    cout<<"Enter the ending multiple: ";
    cin>>last;
    cout<<endl<<"----------------------------------------------------------------------------------"<<endl<<endl<<endl;
    if (last>first)
    {
        for (i=first; i<=last; i=i+1)
        {
            cout<<num<<" X "<<i<<" = "<<num*i<<endl;

        }
    }
    else if (last==first)
    {
        cout<<num<<" X "<<last<<" = "<<num*last<<endl;
    }
    else
    {
       for (i=first; i>=last; i=i-1)
        {
            cout<<num<<" X "<<i<<" = "<<num*i<<endl;

        }
    }
    cout<<endl<<"Enter \"x\" to exit program. Enter anything else to continue."<<endl;
    cin >> choice;
    if (choice=="X" | choice=="x")
    {
        j=1;
    }
    else
    {
        cout<<endl<<"-----------------------------------------------------------------"<<endl<<endl;
    }
    }
    cout<<endl<<"----------------------------------------------------------------------"<<endl<<"The End"<<endl<<endl;
    return 0;
}

