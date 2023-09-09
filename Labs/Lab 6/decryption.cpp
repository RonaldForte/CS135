// Ronald Forte Jr
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
//This is to decrypt ascii values excluding 
char leftshift(char c, int lshift){
	char shifted = c-lshift;
	if(c>= 'A' && c <= 'Z'){
		if(shifted<'A'){
			shifted+=26;
		}
	}
	else if(c>='a' && c<='z'){
		if(shifted<'a'){
			shifted+=26;
		}
	}
	return shifted;
}
//This is to decrypy ceaser
string decryptCaesar(string ciphertext, int rshift){
	string cipher = "";
	for(int i=0; i < ciphertext.size(); i++){
		if(isalpha(ciphertext[i])){
			cipher += leftshift(ciphertext[i], rshift);
		}
		else{
			cipher+=ciphertext[i];
		}
	}
	return cipher;
}
//This is to decrypy vigenere
string decryptVigenere(string ciphertext, string keyword){
	string cipher = "";
	int vinshift = 0;
	int shiftnum = 0;
	for(int i = 0; i < ciphertext.size();i++){
		if(vinshift == keyword.size()){
			vinshift = 0;
		}
		if(isalpha(ciphertext[i])){
			shiftnum = (int)keyword[vinshift]-97;
			cipher+=leftshift(ciphertext[i], shiftnum);
			vinshift++;
		}
		else{
			cipher+=ciphertext[i];
		}
	}
	return cipher;
}
//Input Text
int main(){
	string plaintext;
	int numbershift;
	string keyterm;
	cout << "Enter plaintext: ";
	getline(cin, plaintext);
	cout<< "= Caesar ="<< endl;
	cout << "Enter shift: ";
	cin >> numbershift;
	string shiftedc = encryptCaesar(plaintext, numbershift);
	cout << "Ciphertext: " << shiftedc << endl;
	cout << "Decryted: " << decryptCaesar(shiftedc, numbershift)<< endl;
	cout << "= Vigenere = " << endl;
	cout << "Enter keyword: "; 
	cin >> keyterm;
	string shiftedv = encryptVigenere(plaintext, keyterm);
	cout << "Ciphertext: " << shiftedv << endl;
	cout << "Decrypted: " << decryptVigenere(shiftedv, keyterm);

}