#include <bits/stdc++.h>
using namespace std;

int remain(string, int);
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int O=1, f=0;
    string year;
    cin>>year;
    O=1;
    f=0;
    if ((remain(year,4)==0 && remain(year,100)!=0)|| remain(year,400)==0)
        {
            cout<<"This is leap year."<<endl;
            O=0;
            if (remain(year,55)==0)
            {
                f=1;
            }
        }
    if (remain(year,15)==0)
        {
                cout<<"This is huluculu festival year."<<endl;
                O=0;
        }
    if (O==1)
        {
                cout<<"This is an ordinary year."<<endl;
        }
    if (f==1)
        {
                cout<<"This is bulukulu festival year."<<endl;
        }
    while (cin>>year && EOF)
    {
        cout<<endl;
        O=1;
        f=0;
        if ((remain(year,4)==0 && remain(year,100)!=0)|| remain(year,400)==0)
        {
            cout<<"This is leap year."<<endl;
            O=0;
            if (remain(year,55)==0)
            {
                f=1;
            }
        }
        if (remain(year,15)==0)
            {
                cout<<"This is huluculu festival year."<<endl;
                O=0;
            }
        if (O==1)
            {
                cout<<"This is an ordinary year."<<endl;
            }
        if (f==1)
            {
                cout<<"This is bulukulu festival year."<<endl;
            }
    }
}

int remain(string number, int num)
{
    int div=0;
    for (size_t i=0; i<number.size(); i++)
    {
        //div=div+ int(number[i])-48;
        div=div+ number[i]-'0';
        div=(div%num)*10;
    }
    div=div/10;
    return div;
}
