// Enters a character and outputs its
// octal, decimal, and hexadecimal code.
#include <iostream>
#include <iomanip>
// Declaration of cin, cout
// For manipulators being called
// with arguments.
#include <string>
using namespace std;
int main()
{
int number = ' ';
cout << "The white space code is as follows: "
<< number << endl;
char ch;
string prompt =
"\nPlease enter a character followed by "
" <return>: ";
cout << prompt;
cin >> ch;
number = ch;
// Read a character
cout << "The character " << ch
<< " has code" << number << endl;
cout <<
<<
<<
<<
<<
uppercase
// For hex-digits
"
octal decimal hexadecimal\n "
oct << setw(8) << number
dec << setw(8) << number
hex << setw(8) << number << endl;
return 0;
}
