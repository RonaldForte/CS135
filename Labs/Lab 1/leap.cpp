/* Author: Ronald Forte Jr
Course: CSCI-135 
Instructor: Genady Maryash 
Assignment: Homework 
Lab 1 C: This program computes leap years and common years*/


#include <iostream>
using namespace std;

int main(){
    int year;
    cout << "Enter a Year: ";
    cin >> year;
    
    if (year%4 != 0){
        cout <<"Common year" << endl;
    }
    else if (year%100 != 0){
        cout <<"Leap year" << endl;
    }
    else if (year%400 != 0){
        cout << "Common year" << endl;
    }else{
        cout << "Leap year" << endl;
    }  
    return 0;
}