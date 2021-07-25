#include <bits/stdc++.h>
using namespace std;

int main()
{
    float l, num, sum, avg;
    int i;
    string choice;
    for (int j=0; j==0;)
    {
        cout<<"Enter the term: ";
        cin>>num;
        l=(num-1)/3 + 1;
        if (l-(int)l==0)
        {
            i = num;
            for (; i>0; i-=3)
            {
                sum = sum + i;
                avg = sum/l;
            }
            cout<<endl<<endl<<"Sum: "<<sum;
            cout<<endl<<"Average: "<<avg<<endl;
        }
        else
            cout<<endl<<endl<<"Invalid input";
        cout<<endl<<endl<<"If you wish to continue, enter \"x\". Otherwise, enter anything else."<<endl<<"Key: ";
        cin>>choice;
        if (choice=="x"|choice=="X")
        {
            cout<<endl<<endl<<"--------------------------------------------------------------"<<endl<<"The End"<<endl;
            j=1;
        }
        else
            cout<<endl<<endl<<"--------------------------------------------------------------"<<endl;
    }
    return 0;
}
