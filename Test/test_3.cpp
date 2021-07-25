#include <bits/stdc++.h>
using namespace std;

int remain(string, int);
int main()
{
    string number;
    while (cin>>number)
    {
        int num;
        cout<<"/";
        cin>>num;
        cout<<remain(number,num);
    }
}

int remain(string number, int num)
{
    int div=0, len = number.size();
    for (int i=0; i<len; i++)
    {
        div=div+ int(number[i])-48;
        div=(div%num)*10;
    }
    div=div/10;
    return div;
}
