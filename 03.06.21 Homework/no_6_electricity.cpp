#include <bits/stdc++.h>
using namespace std;

float price(float);

int main()
{
    string user1,user2,user3;
    float unit1,unit2,unit3,price1,price2,price3;
    cout<<"Enter name of the first user: ";
    cin>>user1;
    cout<<"Enter the unit of the first user: ";
    cin>>unit1;
    price1=price(unit1);
    cout<<endl<<"Enter name of the second user: ";
    cin>>user2;
    cout<<"Enter the unit of the second user: ";
    cin>>unit2;
    price2=price(unit2);
    cout<<endl<<"Enter the name of the third user: ";
    cin>>user3;
    cout<<"Enter the unit of the third user: ";
    cin>>unit3;
    price3=price(unit3);
    cout<<endl<<endl<<"Username: "<<user1<<endl<<"Unit: "<<unit1<<endl<<"Total electricity bill: "<<price1<<endl;
    cout<<endl<<endl<<"Username: "<<user2<<endl<<"Unit: "<<unit2<<endl<<"Total electricity bill: "<<price2<<endl;
    cout<<endl<<endl<<"Username: "<<user3<<endl<<"Unit: "<<unit3<<endl<<"Total electricity bill: "<<price3<<endl;
    cout<<endl<<endl;
}

float price (float unit)
{
    float cost;
    cost=100;
    if (unit>=100)
    {
        cost=cost+100*1.75;
        if (unit>=300)
        {
            cost=cost+200*2.25+(unit-300)*3.5;
        }
        else
            cost=cost+(unit-100)*2.25;
    }
    else
        cost=cost+unit*1.75;
    if (cost>1000)
        cost=cost*1.15;
    return cost;

}


