// To use strings.
#include <iostream>
#include <string>
using namespace std;
// Declaration of cin, cout
// Declaration of class string
int main()
{
// Defines four strings:
string prompt("What is your name: "),
name,
// An empty
line( 40, '-'),
// string with 40 '-'
total = "Hello ";
// is possible!
cout << prompt;
getline( cin, name);
total = total + name;
// Request for input.
// Inputs a name in one line
// Concatenates and
// assigns strings.
cout << line << endl
// Outputs line and name
<< total << endl;
cout << " Your name is " // Outputs length
<< name.length() << " characters long!" << endl;
cout << line << endl;
return 0;
}
