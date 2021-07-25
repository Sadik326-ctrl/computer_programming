#include <bits/stdc++.h>
using namespace std;

int main()
{
    float N, sum, avg;
    cout<<"Enter the number: ";
    cin>>N;

    sum=((1+N)/2)*N;

    avg = sum/N;
    cout<<"The sum = "<<sum<<", and the average = "<<avg<<"."<<endl;
    return 0;
}

/*****
1 2 3 4 5 6 7 8 9 10

1+10=11
2+9=11
3+8=11
4+7=11
5+6=11

10/2=5

11

(1+10)*(10/2)
(1st+last)*(n/2)


1+2+3...

(1+10)*(10/2)
(1st+last)*(n/2)

n = last
(1+n)*(n/2)
n(n+1)/2
*/
