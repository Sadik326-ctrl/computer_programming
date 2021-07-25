//racecar, 101
//r  a  c    e   c   a   r
//0  1  2    3   4   5   6

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str,flag;
    cout<<"Enter the string: ";
    cin>>str;
    int len=str.size(),j=len-1;
    for (int i=0; i<len;i++)
    {
        if (str.substr(i,1) != str.substr(j,1))
        {
            flag="no";
            break;
        }
        j--;
    }
    if (flag=="no")
    {
        cout<<endl<<str<<" isn't a palindrome.";
    }
    else
        cout<<endl<<str<<" is a palindrome.";
}
