// Outputs three random numbers
#include <iostream>
#include <cstdlib>
//
//
//
//
Declaration of cin and cout
Prototypes of srand(), rand():
void srand( unsigned int seed );
int rand( void );
using namespace std;
int main()
{
unsigned int seed;
int z1, z2, z3;
cout << "
--- Random Numbers --- \n" << endl;
cout << "To initialize the random number generator, "
<< "\n please enter an integer value: ";
cin >> seed;
// Input an integer
srand( seed); // and use it as argument for a
// new sequence of random numbers.
z1 = rand();
z2 = rand();
z3 = rand(); // Compute three random numbers.
cout << "\nThree random numbers: "
<< z1 << "
" << z2 << "
" << z3 << endl;
return 0;
}
