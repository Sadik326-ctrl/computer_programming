#include <bits/stdc++.h>
using namespace std;
int compare(int,int,int);
void lineDivider();
int main()
{
    int testcase,i;
    cout<<"Please enter the number of comparisons:"<<endl;
    cin>>testcase;
    lineDivider();
    for (i=0;i<testcase;i=i+1)
    {
        int a,b,c;
        cout<<"Please enter the first number: ";
        cin>>a;
        lineDivider();
        cout<<"Please enter the second number: ";
        cin>>b;
        lineDivider();
        cout<<"Please enter the third number: ";
        cin>>c;
        lineDivider();
        compare(a,b,c);
    }
    return 0;
}
void lineDivider()
{
    cout<<endl<<"------------------------------------------------------------------------"<<endl;
}
int compare(int a,int b, int c)
{
    int highest=-32768,lowest=32767,mid;
    int j;
    if (a>highest)
            {
            highest=a;

            if (b>highest)
                    {highest=b;}

            if (c>highest)
                    {highest=c;}
            }
     if (a<lowest)
            {lowest=a;
            if (b<lowest)
                    {lowest=b;}
            if (c<lowest)
                    {lowest=c;}
            }
    if (a>lowest & a<highest)
        {mid=a;}
    else if (b>lowest & b<highest)
            {mid =b;}
    else
        {mid=c;}
    cout<<highest<<" is the highest number, "<<mid<<" is the median, and "<<lowest<<" is the  lowest number."<<endl<<endl;
    lineDivider();
    return 0;

}
