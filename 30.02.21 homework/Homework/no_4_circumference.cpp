#include <bits/stdc++.h>
using namespace std;

float area(float);
float circumference(float);
void linedivider();

int main()
{
    string choice;
    int i;
    float radius;
    for (i=0; i==0;)
    {
        cout<<"Please enter the radius of the circle: ";
        cin>>radius;
        area(radius);
        circumference(radius);
        linedivider();
        cout<<"Press \"x\" if you wish to continue. Otherwise, press anything else."<<endl;
        cin>> choice;
        if (choice=="x"|choice=="X")
        {
            i=1;
            linedivider();
            cout<<"The End"<<endl;
        }
        else
        {
            linedivider();
        }
    }
    return 0;
}

void linedivider()
{
    cout<<endl<<"-------------------------------------------------------"<<endl;
}

float area (float radius)
{
    cout<<endl<<"Area: "<<M_PI*pow(radius,2)<<endl;
    return 0;
}

float circumference (float radius)
{
    cout<<endl<<"Circumference: "<<2*M_PI*radius<<endl;
    return 0;
}
