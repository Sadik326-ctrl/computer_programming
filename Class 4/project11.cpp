#include <iostream>
#include <climits>
using namespace std;// Definition of INT_MIN...
int main()
{
    cout<< "Range of types int and unsigned int"<<endl<<endl;
    cout<< "Type            Minimum         Maximum"<<endl<<"-----------------------------------------";
    cout<<"int               "<<INT_MIN<<"                   "<<INT_MAX<<endl;
    cout<<"unsigned int "<<"        0  "<<UINT_MAX<<endl;
    return 0;

}

