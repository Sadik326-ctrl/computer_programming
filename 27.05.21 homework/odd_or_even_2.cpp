#include <bits/stdc++.h>
using namespace std;

int main()
{
    string choice,cont;
    int start, finish, i;
    for (i=0; i==0;)
    {
        cout<<"Enter the starting number: ";
        cin>>start;
        cout<<"Enter the ending number: ";
        cin>>finish;
        cout<<"Enter \"odd\" or \"even\": ";
        cin>>choice;
        cout<<endl<<endl<<"Result:\n";
        if (choice=="odd")
        {
            if (start%2==1)
            {
                if (start<finish)
                {
                    for (; start<=finish; start=start+2)
                    {
                        cout<<start<<endl;
                    }
                }
                else if (start==finish)
                {
                    cout<<start<<endl;
                }
                else
                {
                    for (; start>=finish; start=start-2)
                    {
                        cout<<start<<endl;
                    }
                }
            }

            else
            {
                if (start<finish)
                {
                    start=start+1;
                    for (; start<=finish; start=start+2)
                    {
                        cout<< start<<endl;
                    }
                }
                else if (start==finish)
                {
                    cout<<"No odd numbers in this range."<<endl;
                }
                else
                {
                    start=start-1;
                    for (; start>=finish; start=start-2)
                    {
                        cout<<start<<endl;
                    }
                }

            }
        }
        if (choice=="even")
        {
            if (start%2==0)
            {
                if (start>finish)
                {
                    for (; start>=finish; start=start-2)
                    {
                        cout<<start<<endl;
                    }
                }
                else if (start==finish)
                {
                    cout<<start<<endl;
                }
                else
                {
                    for (; start<=finish; start=start+2)
                    {
                        cout<<start<<endl;
                    }
                }
            }
            else
            {
                if (start<finish)
                {
                    start=start+1;
                    for (; start<=finish; start=start+2)
                    {
                        cout<<start<<endl;
                    }
                }
                else if (start==finish)
                {
                    cout<<"No even values in this range."<<endl;
                }
                else
                {
                    start=start-1;
                    for (; start>=finish; start=start-2)
                    {
                        cout<<start<<endl;
                    }
                }

            }
        }
        cout<<endl<<endl<<"Enter x to exit. Enter anything else to continue: ";
        cin>>cont;
        if (cont=="x" | cont=="X")
        {
            i=1;
        }
        else
        {
            cout<<endl<<endl<<"--------------------------------------------------------------------------"<<endl<<endl;
        }
    }
    cout<<endl<<endl<<"------------------------------------------------------------------------------\n"<<"The End"<<endl<<endl;
}
