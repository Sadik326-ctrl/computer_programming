#include <bits/stdc++.h>
using namespace std;

int main()
{
    string p1,p2,winner;
    cout<<"Player 1:\nEnter \"rock\",\"paper\" or \"scissors\"\n";
    cin>>p1;
    cout<<endl<<"Player 2:\nEnter \"rock\",\"paper\" or \"scissors\"\n";
    cin>>p2;
    if (p1=="rock" & p2 =="scissors")
        winner="Player 1";
    else if (p1 == "scissors" & p2=="paper")
        winner="Player 1";
    else if (p1=="paper" & p2=="rock")
        winner= "Player 1";
    else if (p1==p2)
        winner = "no one";
    else
        winner = "Player 2";
    cout<<endl<<"The winner is..."<<endl<<winner<<endl;
    return 0;
}
