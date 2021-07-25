#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string choice;
    for (int k=0; k==0;)
    {
        cout<<"Enter an even number: ";
        cin>>n;
        if (n%2==0 & n>0)
        {
            cout<<"The Drawing:\n";
            for (int i=0; i<(n/2); i++ )
            {
                cout<<endl<<"****----";
            }
            for (int j=0; j<(n/2); j++)
            {
                cout<<endl<<"--------";
            }
        }
        else
            cout<<n<<" is not a positive even number.";
                cout<<endl<<endl<<"Wish to exit? Enter \"x\". Want to stay? Enter anything else."<<endl;
        cin>>choice;
        if (choice=="x"|choice=="X")
        {
            cout<<endl<<endl<<"------------------------------------------------------"<<endl<<"It has ended..."<<endl;
            k=1;
        }
        else
        {
            cout<<endl<<endl;
        }
    }
    return 0;
}
