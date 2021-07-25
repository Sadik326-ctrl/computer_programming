#include <bits/stdc++.h>
using namespace std;

int main()
{
    string date,month,day,year,Day;
    int Year;
    cout<<"Enter the date in the \"dd-mm-yy\" form"<<endl;
    cin>>date;
    cout<<endl<<endl;
    month=date.substr(3,2);
    day=date.substr(0,2);
    year=date.substr(6,2);
    if (month=="01")
        cout<<"January";
    else if (month=="02")
        cout<<"February";
    else if (month=="03")
        cout<<"March";
    else if (month=="04")
        cout<<"April";
    else if (month=="05")
        cout<<"May";
    else if (month=="06")
        cout<<"June";
    else if (month=="07")
        cout<<"July";
    else if (month=="08")
        cout<<"August";
    else if (month=="09")
        cout<<"September";
    else if (month=="10")
        cout<<"October";
    else if (month=="11")
        cout<<"November";
    else
        cout<<"December";
    Day=day.substr(1,1);
    if (day.substr(0,1)=="0")
    {
        if (Day=="1")
            cout<<" 1st,";
        else if (Day=="2")
            cout<<" 2nd,";
        else if (Day=="3")
            cout<<" 3rd,";
        else
            cout<<" "<<Day<<"th,";
    }
    else if (day.substr(0,1)=="1")
    {
        cout<<" "<<day<<"th,";
    }

    else
    {
        if (Day=="1")
            cout<<" "<<day<<"st,";
        else if (Day=="2")
            cout<<" "" "<<day<<"nd,";
        else if (Day=="3")
            cout<<" "<<day<<"rd,";
        else
            cout<<" "<<day<<"th,";
    }
    stringstream YEAR (year);
    YEAR>>Year;
    if (Year>=50)
        cout<<" 19"<<year<<endl<<endl;
    else
        cout<<" 20"<<year<<endl<<endl;
    return 0;
}
