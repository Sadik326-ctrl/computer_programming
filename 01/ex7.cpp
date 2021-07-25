// Definition and use of variables
#include <iostream>
using namespace std;
int gVar1;
int gVar2 = 2;
// Global variables,
// explicit initialization
int main()
{
	char ch('A');
	// Local variable being initialized
	// or: char ch = 'A';
	cout << "Value of gVar1: ";
	cout << "Value of gVar2:
	cout << "Character in ch: " << gVar1
	" << gVar2
	" << ch
	<< endl;
	<< endl;
	<< endl;
	int sum, number = 3; // Local variables with
	// and without initialization
	sum = number + 5;
	cout << "Value of sum:
	" << sum << endl;
	return 0;
}
