// Inputs an article label and a price
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
// Declarations of cin, cout,...
// Manipulator setw()
int main()
{
string label;
double price;
cout << "\nPlease enter an article label: ";
// Input the label (15 characters maximum):
cin >> setw(16);
// or: cin.width(16);
cin >> label;
cin.sync();
cin.clear();
// Clears the buffer and resets
// any error flags that may be set
cout << "\nEnter the price of the article: ";
cin >> price;
// Input the price
// Controlling output:
cout << fixed << setprecision(2)
<< "\nArticle:"
<< "\n Label: " << label
<< "\n Price: " << price << endl;
// ... The program to be continued
return 0;
}
