#include <bits/stdc++.h>
using namespace std;

int main()
{
    char chr;
    int n,asc;
    string word;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the word: ";
    //getchar();
    getline(cin, word);
    cout<<word;
    /*cout<<endl<<endl<<"The encoded piece of work:\n";
    for (int i=0; i<n; i++)
    {
        stringstream L (word.substr(i,1));
        L >> chr;
        asc = int(chr);
        if (asc==90)
        {
            asc=65;
        }
        else if (asc==122)
        {
            asc=97;
        }
        else if (asc>=65 & asc<90| asc>=97 & asc<122)
        {
            asc=asc+1;
        }
        else
        {
            asc = 42;
        }
        cout<< char(asc);
    }
    cout<<endl<<endl;
*/

}


