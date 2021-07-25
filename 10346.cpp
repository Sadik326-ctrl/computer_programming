#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int n,k;
    while (scanf("%llu%llu", &n, &k)==2 && EOF)
    {
        unsigned long long int total=0;
        for (unsigned long long int j=n; j>=1; j=(j/k))
        {
            total=total+j;
        }
        printf("%llu\n",total);
    }
}
