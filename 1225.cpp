#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int k=0; k<t; k++)
    {
        string str="";
        long long int N;
        cin>>N;
        for (long long int i=1; i<=N; i++)
        {
            str=str+to_string(i);
        }
        int num[10]={0};
        //memset(num, 0, 10);
        for (int j=0; j<str.size();j++)
        {
            switch (str[j])
            {
                case '0':
                    num[0]++;
                    break;
                case '1':
                    num[1]++;
                    break;
                case '2':
                    num[2]++;
                    break;
                case '3':
                    num[3]++;
                    break;
                case '4':
                    num[4]++;
                    break;
                case '5':
                    num[5]++;
                    break;
                case '6':
                    num[6]++;
                    break;
                case '7':
                    num[7]++;
                    break;
                case '8':
                    num[8]++;
                    break;
                case '9':
                    num[9]++;
                    break;
            }
        }
        cout<<num[0]<<" "<<num[1]<<" "<<num[2]<<" "<<num[3]<<" "<<num[4]<<" "<<num[5]<<" "<<num[6]<<" "<<num[7]<<" "<<num[8]<<" "<<num[9]<<endl;
    }
}
