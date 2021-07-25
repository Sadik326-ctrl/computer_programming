//
//
Calculating powers with
the standard function pow()
#include <iostream>
#include <cmath>
// Declaration of cout
// Prototype of pow(), thus:
// double pow( double, double);
using namespace std;
int main()
{
double x = 2.5, y;
// By means of a prototype, the compiler generates
// the correct call or an error message!
// Computes x raised
y = pow("x", 3.0);
y = pow(x + 3.0);
y = pow(x, 3.0);
y = pow(x, 3);
to
//
//
//
//
//
the power 3:
Error! String is not a number
Error! Just one argument
ok!
ok! The compiler converts the
int value 3 to double.
cout << "2.5 raised to 3 yields:
<< y << endl;
"
// Calculating with pow() is possible:
cout << "2 + (5 raised to the power 2.5) yields: "
<< 2.0 + pow(5.0, x) << endl;
return 0;
}
