#include <bits/stdc++.h> 
using namespace std; 

int main() { 
	string word; 
	cin>>word; 
	for(int i=0; i<word.size();i++){ 
		if(word[i]<='a' && word[i]>='z'){ 
			cout<<word[i]-32; 
		} 
		else if(word[i]<='A' && word[i]>='Z'){ 
			cout<<word[i]+32; 
		} 
	} 
	return 0; 
} 
