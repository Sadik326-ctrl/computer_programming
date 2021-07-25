#include <iostream>

using namespace std;

int main()
{
    int num;
    while(cin>>num && EOF){
        int sum=0;
        for(int x=0; x<num; x++){
            if(num%x==0){
                sum=sum+x;
            }
        }
        if(sum<num){
            cout<<"DEFICIENT"<<endl;
        }
        else if(sum==num){
            cout<<"PERFECTION"<<endl;
        }
        else{
            cout<<"ABUNDANT"<<endl;
        }
    }

    return 0;
}
