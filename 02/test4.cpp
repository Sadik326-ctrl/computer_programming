#include <bits/stdc++.h>
using namespace std;

int main () {

        int a,b;
        cout << "input two integers: " << endl;
        cout << "a :";
        cin >> a;
        cout << "b :";
        cin >> b;

        a > b ? cout << a << " is greater than " << b << endl : cout << "FALSE" << endl;
        a < b ? cout << a << " is less than " << b << endl : cout << "FALSE" << endl;
        a == b ? cout << a << " is equal to " << b << endl : cout << "FALSE" << endl;

        cout << "The end" << endl;

        return 0;

}

