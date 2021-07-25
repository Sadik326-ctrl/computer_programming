#include <bits/stdc++.h>
using namespace std;

int main () {

	for (int i = 1; i < 100; i += 2 ) {
		cout << i << " ";
		if ( i % 5 == 0 ){
			cout << "divided by 5 ";
			continue;
		}
		else if ( i % 33 == 0 ) {
			cout << "divided by 33 ";
			break;
		}
		cout << " no more condition" << endl;
	}

	return 0;

}
