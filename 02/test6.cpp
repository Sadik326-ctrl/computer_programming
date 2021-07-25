#include <bits/stdc++.h>
using namespace std;

int main () {

	int test;
	cout << "Test : ";
	cin >> test;

	cout << " Output: " << endl;
	cout << "i = 0; \ti < test ; \ti=i+1" << endl;
	for (int i = 0; i < test; i=i+1) {
		cout << i << "; \t" << i << " < " << test << " ; \t" << endl;
		cout << "Print :" << i << endl;
		cout << " " << " ; \t" << " " << "   " << " "  << " ; \t" << i+1 << endl;
		cout << "----------------------------------------------------" << endl;
	}

	cout << " The End " << endl;
	
	return  0;

}
