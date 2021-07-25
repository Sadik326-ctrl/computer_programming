#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int j=0; j==0;)
    {
        string word, digit,choice;
        float num, leng, sum=0;
        cout<<"Enter the integer: ";
        cin>>word;
        leng = word.size();
        for (int i=0; i<leng; i++)
        {
            digit = word.substr(i,1);
            stringstream N(digit);
            N >> num;
            sum=sum+num;
        }
        cout<<endl<<"Sum: "<<sum<<endl;
        cout<<endl<<endl<<"To exit program, enter \"x\" . Otherwise, enter anything else."<<endl<<"Key: ";
        cin >> choice;
        if (choice=="x"|choice=="X")
        {
            cout<<endl<<endl<<"--------------------------------------------------------------"<<endl<<"The End"<<endl;
            j=1;
        }
        else
        {
            cout<<endl<<endl<<"--------------------------------------------------------------"<<endl;
        }
    }
    return 0;
}
