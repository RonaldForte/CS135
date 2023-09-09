// Ronald Forte Jr
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

//To reset values back to ascii letters and not symbols
char shiftChar(char c, int rshift){
	if(!(isalpha(c))){
		return c;
	}
	int shifted = (int)c+rshift;
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
//This is for Vigenere encryption
string encryptVigenere(string plaintext, string keyword){
	string cipher = "";
	int vinshift = 0;
	int shiftnum = 0;
	for (int i = 0; i <plaintext.size();i++){
		if(vinshift == keyword.size()){
			vinshift = 0;
		}
		if(isalpha(plaintext[i])){
			shiftnum = (int)keyword[vinshift]-97;
			cipher += shiftChar(plaintext[i], shiftnum);
			vinshift++;	
		}
		else{
			cipher= cipher+plaintext[i];
		}
	}
	return cipher;
}
//Input Text
int main(){
	string plain;
	cout << "Enter plaintext: ";
	getline(cin, plain);
	string shift;
	cout << "enter shift: ";
	cin >> shift;
	cout << encryptVigenere(plain, shift);
}