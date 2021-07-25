#include <bits/stdc++.h>
using namespace std;
float iSumFunc(float,float), iMinFunc(float,float),iMultFunc(float,float),iDivFunc(float,float);
float chooseoper(float,float,char);
int main()
{
    string choice;
    int rep=0;                                      //for (rep=0;rep=5;rep=rep+0)
    while  (rep==0)
    {
        float num1,num2;
        char oper;

        cout<<"Please enter the first number: "<<endl;
        cin>>num1;
        cout<<endl<<"Please enter any one of the following:\n"<<"+  -  *  /"<<endl<<endl;
        cin>>oper;
        cout<<endl<<"Please enter the second number:"<<endl;
        cin>>num2;

        cout<<endl<<"Result:\n";
        cout<<num1<<" "<<oper<<" "<<num2<<" "<<"="<<" ";
        chooseoper(num1,num2,oper);
        cout<<endl;
        cout<<"Enter \"1\" to repeat. Enter anything else to terminate the program."<<endl;
        cin>>choice;
        cout<<"------------------------------------------------------"<<endl;
        if (choice!="1")
        {
            rep=1;
        }
        else
        {
            cout<<endl<<endl<<endl<<"------------------------------------------------------"<<endl;
        }
    }
    cout<<"The program has been terminated.\nHave a beautiful day!"<<endl<<endl;
    return 0;

}



float iSumFunc(float num1,float num2)
{
    return (num1+num2);
}
float iMinFunc(float num1,float num2)
{
    return (num1-num2);
}
float iMultFunc(float num1,float num2)
{
    return (num1*num2);
}
float iDivFunc(float num1,float num2)
{
    return (num1/num2);
}



float chooseoper(float num1,float num2,char oper)
{
    switch (oper)
    {

    case '+':
        cout<<iSumFunc(num1,num2)<<endl;
        break;

    case '-':
        cout<<iMinFunc(num1,num2)<<endl;
        break;

    case '*':
        cout<<iMultFunc(num1,num2)<<endl;
        break;

    case    '/':
        cout<<iDivFunc(num1,num2)<<endl;
        break;

    default:
        cout<<"Error: wrong operator chosen."<<endl;
        break;
        return 0;
    }
}
