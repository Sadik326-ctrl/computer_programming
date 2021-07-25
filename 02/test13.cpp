#include <bits/stdc++.h> 
using namespace std;
int main () { 
	
	string word = "", word2 = "";  
	cout << "word : ";
	cin >> word; 
	unsigned long long int i;
	for( i = 0; i < word.size(); i++) {
		string convertedLetter = "";
		cout << "word["<< i <<"] : " << word[i] << endl; 	
		
		if( word[i] >= 'a' && word[i] <= 'z' ) { 
			convertedLetter = word[i] - 32;
		} else if( word[i] >= 'A' && word[i] <= 'Z' ) {
			convertedLetter = word[i] + 32;
		}
		word2 = word2 + convertedLetter;		
	}
		
	cout << "word2 : " << word2 << endl; 
	
	return 0; 
} 
