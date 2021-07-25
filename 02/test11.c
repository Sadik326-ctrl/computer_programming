//#include <bits/stdc++.h>
#include <stdio.h>
//using namespace std;

int main () {

	char ch;
	//cin >> l;
	scanf("%c", &ch);
	printf("%c\n", ch);

	if('a' >= ch && ch <= 'z') {
		ch = ch - 'a' + 'A';
	} else {
		ch = ch - 'A' + 'a';
	}

	//cout << l << endl;
	printf("%c", ch);

	// format specifier

	return 0;

}
