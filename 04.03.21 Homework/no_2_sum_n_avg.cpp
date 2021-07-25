#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int j=0; j==0;)
    {
        int n;
        string choice;
        float sum=0, avg, num;
        cout<<"How many numbers will you enter?\nAnswer: ";
        cin>>n;
        for (int i=0; i<n ; i++)
        {
            cout<<endl<<"Please enter the number: "<<endl;
            cin>>num;
            sum=sum+num;
        }
        avg=(float)sum/n;
        cout<<endl<<endl<<"Sum: "<<sum<<endl<<"Average: "<<avg;
        cout<<endl<<endl<<endl<<"Enter \"x\" to exit. Otherwise enter anything else."<<endl;
        cin>>choice;
        if (choice=="x"|choice=="X")
        {
            j=1;
            cout<<endl<<endl<<"---------------------------------------------------------------------"<<endl<<"The End"<<endl;
        }
        else
        {
            cout<<endl<<endl<<"---------------------------------------------------------------------"<<endl;
        }


    }
    return 0;
}
