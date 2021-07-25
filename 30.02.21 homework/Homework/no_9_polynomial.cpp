#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a,b,c,root1,root2,discriminant;
    int i;
    string choice;
    for (i=0; i==0;)
    {
        cout<<"y = a(x**2) + bx + c"<<endl<<endl;
        cout<<"Enter the value of a: ";
        cin>>a;
        cout<<endl<<"Enter the value of b: ";
        cin>>b;
        cout<<endl<<"Enter the value of c: ";
        cin>>c;
        discriminant=pow(b,2)-4*a*c;
        if (discriminant<0)
        {
            cout<<endl<<"None of the roots are real."<<endl;
        }
        else if (discriminant==0)
        {
            if (b==0)
            {
                cout<<endl<<"There is only one root: 0"<<endl;
            }
            else
            {
                root1= (-b)/(2*a);
                cout<<endl<<"There is only one root: "<<root1<<endl;
            }
        }
        else
        {
            root1=(-b+sqrt(pow(b,2)-4*a*c))/2*a;
            root2=(-b-sqrt(pow(b,2)-4*a*c))/2*a;
            cout<<endl<<endl<<"The first root is "<<root1<<endl;
            cout<<"The second root is "<<root2<<endl;
        }
        cout<<endl<<endl<<"Enter \"x\" to exit. Otherwise press any other button."<<endl;
        cin>>choice;
        if (choice=="x"|choice=="X")
        {
            i=1;
            cout<<endl<<"-----------------------------------------------------"<<endl<<"The End"<<endl;
        }
        else
        {
            cout<<endl<<"-----------------------------------------------------"<<endl<<endl;
        }
    }
    return 0;
}
