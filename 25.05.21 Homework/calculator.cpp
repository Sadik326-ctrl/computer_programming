#include <bits/stdc++.h>
using namespace std;
float iSumFunc(int,int), iMinFunc(int,int),iMultFunc(int,int),iDivFunc(int,int);
float chooseoper(int,int,char);
int main()
{
    int num1,num2,result;
    char oper;

    cout<<"Please enter the first integer: "<<endl;
    cin>>num1;
    cout<<endl<<"Please enter any one of the following:\n"<<"+  -  *  /"<<endl<<endl;
    cin>>oper;
    cout<<endl<<"Please enter the second integer:"<<endl;
    cin>>num2;

    cout<<endl<<"Result:\n";
    cout<<num1<<oper<<num2<<"=";
    chooseoper(num1,num2,oper);
}



float iSumFunc(int num1,int num2)
{
    return (num1+num2);
}
float iMinFunc(int num1,int num2)
{
    return (num1-num2);
}
float iMultFunc(int num1,int num2)
{
    return (num1*num2);
}
float iDivFunc(int num1,int num2)
{
    return (num1/num2);
}



float chooseoper(int num1,int num2,char oper)
{
    switch (oper)
    {

        case '+':
            cout<<iSumFunc(num1,num2);
        break;

        case '-':
            cout<<iMinFunc(num1,num2);
        break;

        case '*':
        cout<<iMultFunc(num1,num2);
        break;

        case    '/':
        cout<<iDivFunc(num1,num2);
        break;

        default:
        cout<<"Error: wrong operator chosen.";
        break;
    }
}
