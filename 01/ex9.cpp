// Circumference and area of a circle with radius 2.5
#include <iostream>
using namespace std;
const double pi = 3.141593;
volatile const unsigned time_to_live;
int main()
{
double area, circuit, radius = 1.5;
area = pi * radius * radius;
circuit = 2 * pi * radius;
cout << "\nTo Evaluate a Circle\n" << endl;
cout << "Radius:
" << radius
<< "Circumference: " << circuit
<< "Area:
" << area
<< endl
<< endl
<< endl;
return 0;
}