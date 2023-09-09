// Ronald
// 
// 
// 
// 
// 
// 
// 
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

//To reset values back to ascii letters and not symbols
char shiftChar(char c, int rshift){
	if(!(isalpha(c))){
		return c;
	}
	int shifted = c+rshift;
	if(c >= 'A' && c <= 'Z'){

		if(shifted> 'Z'){
			shifted-=26;
		}
	}
	else if(c >= 'a' && c <= 'z'){
		if(shifted> 'z'){
			shifted-=26;
		}
	}
	return shifted;
}

//This is for Ceasar's encryption
string encryptCaesar(string plaintext, int rshift){
	string newstring = "";
	for(int i = 0; i < plaintext.size(); i++){
		if(isalpha(plaintext[i])){ //isalpha here
			newstring += shiftChar(plaintext[i], rshift);
		}
		else {
			newstring+=plaintext[i];
		}
	}
	return newstring;
}

//Input text
int main(){
	string plain;
	cout << "Enter plaintext: ";
	getline(cin, plain);
	int shift;
	cout << "enter shift: ";
	cin >> shift;
	cout << encryptCaesar(plain, shift);
}