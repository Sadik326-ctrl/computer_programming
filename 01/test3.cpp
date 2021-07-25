#include <iostream>
#include <cstdio>

using namespace std;

int main () {
	int numberOne = 70, numberTwo = 2;
       char alphabetA = 'A', alphabetB = 'b';

	  cout << numberOne << endl << alphabetA << endl << alphabetB << endl << numberTwo << endl;
	cout << "----------------------------------------------" << endl;
	  printf("%d %c\n", numberOne, numberOne);
	  printf("%d %c %c\n", alphabetA, alphabetA, 65+5);
	  printf("%d %c %c\n", alphabetB, alphabetB, 98+4);
	  printf("%d %c\n", numberTwo, numberTwo);
	  printf("%d %d %d\n", ' ', ' ', '#'); 


	  cout << "----------------------" <<endl;

	  bool result = true, resultOne = 1, resultZero = 0, resultFalse = false;
	  cout << result << " and " << resultFalse << endl;
	  cout << resultOne << " and " << resultZero << endl;

	  float fractionNumber = 10.33, fN = 1.5;

	  cout << fractionNumber << " " << fN << endl;

	  double fractionNum = 10.33, fNN = 1.5;

	  cout << fractionNum << " " << fNN << endl;
	  
     return 0;	  
}
