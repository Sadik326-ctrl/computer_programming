#include <bits/stdc++.h>
using namespace std;

void strReverse (string& str){
	
	long long int n = str.size();
	
	for (long long int i = 0; i < n/2; i++) {
		swap(str[i], str[n-i-1]);

		//Given
		//num1 = 10;
		//num2 = 5;
		//----------------
		//After swapping
		//num1 < 5;
		//num2 < 10;
	}
}

int main() 
{ 
	string word, word2; 
	//int length; 
	
	cin >> word;

	word2 = word;	
	
	//length = word.size(); 
	//reverse(word.begin(), word.end());
	strReverse (word);
	cout << word2 << " => "  << word << endl;
	
	if(word==word2){ 
		cout<<"It's a palindrome"<<endl; 
	} else{ 
		cout<<"It is not a palindrome"<<endl; 
	} 
	
	return 0; 
}
