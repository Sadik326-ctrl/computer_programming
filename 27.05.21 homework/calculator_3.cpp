#include <bits/stdc++.h>
using namespace std;

int main()
{
    float i;
    for (i=0; i==0;)
    {
        float num1,num2,result;
        char oper,choice;
        cout<<"Enter the calculation:"<<endl;
        cin>>num1>>oper>>num2;
        switch (oper)
        {
        case '+':
            result=num1+num2;
            break;

        case '-':
            result=num1-num2;
            break;

        case '*':
            result=num1*num2;
            break;

        case '/':
            result=num1/num2;
            break;
        }
        cout<<"="<<result<<endl;
        cout<<endl<<endl<<"Enter x to exit. Enter anything else to continue."<<endl;
        cin>>choice;
        if (choice=='x' | choice=='X')
        {
            i=2;
            cout<<endl<<"-------------------------------o-------------------------------"<<endl;
        }
        else
        {
            cout<<"----------------------------------------------------------------------------------"<<endl<<endl<<endl;
        }
    }
    return 0;
}
