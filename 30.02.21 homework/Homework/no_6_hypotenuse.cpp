#include <bits/stdc++.h>
using namespace std;

int main()
{
    float side1,side2,hypo;
    int i;
    string choice;
    for (i=0; i<1;)
    {
        cout<<"Enter the length of the first side: ";
        cin>>side1;
        cout<<endl<<"Enter the length of the second side: ";
        cin>>side2;
        hypo= sqrt(pow(side1,2)+pow(side2,2));
        cout<<endl<<"Hypotenuse = "<<hypo<<endl;
        cout<<endl<<"Press \"x\" to exit. Otherwise press any other button."<<endl;
        cin>>choice;
        if (choice=="x"|choice=="X")
        {
            i=1;
            cout<<endl<<"-----------------------------------------------------------------"<<endl<<"The End"<<endl;
        }
        else
        {
            cout<<endl<<"--------------------------------------------------------------------"<<endl<<endl;
        }
    }

}
