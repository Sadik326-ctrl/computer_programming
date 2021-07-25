#include <bits/stdc++.h>
using namespace std;

int main () {

	int a,b;
	cout << "input two integers: " << endl;
	cout << "a :";
	cin >> a;
       	cout << "b :";
	cin >> b;

	if ( a > b ) {
		cout << a << " is greater than " << b << endl;
	} else if( a < b ) {
		cout << a << " is less than " << b << endl;
	} else if( a == b ) {
		cout << a << " is equal to " << b << endl;
	}
	
	cout << "The end" << endl;

	return 0;

}
