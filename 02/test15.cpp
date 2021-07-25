#include <bits/stdc++.h>
using namespace std;

int main () {

        char val[10];

        cout << sizeof(val) << endl;
        cout << "size of val : " << sizeof(val)/sizeof(val[0]) << endl;
        for (int i = 0; i < 10; i++) {
                cout << "val[" << i << "] = ";
                cin >> val[i];
                cout << endl;
        }

        for (int i = 0; i < 10; i++ ){
                cout << val[i] << endl;
        }

        cout << endl;

	cout << val << endl;

        return 0;
}
