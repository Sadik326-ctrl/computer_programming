#include <bits/stdc++.h>
using namespace std;

int main()
{
    float score;
    string choice, grade;
    for (int i=0; i==0;)
    {
        cout<<"Enter the student's score: ";
        cin>>score;
        if (score>=80 & score<=100)
            grade="A";
        else if (score>=65 & score<=79)
            grade = "B";
        else if (score>=50 & score<=64)
            grade = "C";
        else if (score>=40 & score<=49)
            grade = "D";
        else if (score<=39 & score>=00)
            grade = "F";
        else
            grade = "Invalid Score";
        cout<<endl<<endl<<"Grade: "<<endl;
        cout<<grade;
        cout<<endl<<endl<<"Enter \"x\" to exit. Enter anything else to continue."<<endl;
        cin>>choice;
        if (choice=="x"|choice=="X")
        {
            cout<<endl<<endl<<"------------------------------------------------------------"<<endl<<"The End"<<endl;
            break;
        }
        else
            cout<<endl<<endl<<"--------------------------------------------------------------"<<endl<<endl;

    }


}
