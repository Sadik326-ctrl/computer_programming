#include <bits/stdc++.h>

using namespace std;

int mySumFunc(int, int);
void lineDivider();

int main () {

	int num1, num2, result;

	cout << "Please input two integer: " << endl;
	
	cin >> num1;
       
	lineDivider();
	
	cin >> num2;

	result = mySumFunc(num1, num2);
	
	cout << "Result: " << result << endl;

	return 0;
}

int mySumFunc(int num1, int num2) {
	//cout << num1 + num2 << endl;
	return num1 + num2;
}

void lineDivider () {
 
	cout << "==========================================================" << endl; 
}
