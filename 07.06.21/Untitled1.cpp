#include <bits/stdc++.h>
using namespace std;

int main () {
	char word, word2;
	for(int i=0; i<1; i+=0){
        cin>>word;
	        if(word>='a' && word<='z'){
	            word2=word2+word-32;
	        }
	        else if(word>='A' && word<='Z'){
	            word2= word2+word+32;
	        }
	    cout<<word2<<endl;
	}

	return 0;
}
