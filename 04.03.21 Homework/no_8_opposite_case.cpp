#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int k=0; k==0;)
    {
        string str,choice;
        char chr;
        cout<<"Enter the string: ";
        cin>>str;
        cout<<endl<<"Result:"<<endl;
        for (int i=0; i<str.size(); i++)
        {
            stringstream CHR (str.substr(i,1));
            CHR>>chr;
            if (int(chr)>=65 & int(chr)<=90)
            {
                cout<<char(int(chr)+32);
            }
            else if (int(chr)>=97 & int(chr)<=122)
            {
                cout<<char(int(chr)-32);
            }
            else
            {
                cout<<chr;
            }
        }
        cout<<endl<<endl;
        cout<<"Enter \"x\" to exit. Otherwise, enter anything else."<<endl<<"Key: ";
        cin>>choice;
        if (choice=="x"|choice=="X")
        {
            cout<<endl<<endl<<"----------------------------------------------------------------"<<endl<<"The End"<<endl;
            k=1;
        }
        else
        {
            cout<<endl<<endl<<"----------------------------------------------------------------"<<endl;
        }
    }
}
