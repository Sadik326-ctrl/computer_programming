#include <bits/stdc++.h>
using namespace std;

int main()
{
        long double bitsize,low,upp;

        cout<<"int: "<<endl;
        bitsize=sizeof(int)*8;
        low=-pow(2,bitsize);
        upp=pow(2,bitsize)-1;
        cout<<"bit width: "<<bitsize<<endl;
        cout<<"lower bound: "<<low<<endl;
        cout<<"upper bound: "<<upp<<endl;

        cout<<endl<<endl<<"float: "<<endl;
        bitsize=sizeof(float)*8;
        low=-pow(2,bitsize);
        upp=pow(2,bitsize)-1;
        cout<<"bit width: "<<bitsize<<endl<<"lower bound: "<<low<<endl<<"upper bound: "<<upp<<endl;

        cout<<endl<<endl<<"double:"<<endl;
        bitsize=sizeof(double)*8;
        low=-pow(2,bitsize);
        upp=pow(2,bitsize)-1;
        cout<<"bit width: "<<bitsize<<endl;
        cout<<"lower bound: "<<low<<endl<<"upper bound: "<<upp<<endl;

        cout<<endl<<endl<<"string:"<<endl;
        bitsize=sizeof(string)*8;
        low=0;
        upp=pow(2,bitsize+1)-1;
        cout<<"bit width:  "<<bitsize<<endl;
        cout<<"lower bound: "<<low<<endl;
        cout<<"upper bound: "<<upp<<endl;

        cout<<endl<<endl<<"char: "<<endl;
        bitsize=sizeof(char)*8;
        low=0;
        upp=pow(2,bitsize+1)-1;
        cout<<"bit width: "<<bitsize<<endl;
        cout<<"lower bound: "<<low<<endl;
        cout<<"upper bound: "<<upp<<endl;

}
