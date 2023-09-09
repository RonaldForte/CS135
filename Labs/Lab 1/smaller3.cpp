/* Author: Ronald Forte Jr
Course: CSCI-135 
Instructor: Genady Maryash 
Assignment: Homework 
Task B: This program finds the smallest of 3 integers and prints it*/

#include <iostream>
using namespace std;

int main() {
    int first, second, third;
    cout << "Enter a number: ";
    cin >> first;
    cout << "Enter a number: ";
    cin >> second;
    cout << "Enter a number: ";
    cin >> third;

    if (first<second) {
        if(first<third){
            cout << first << endl;
        } else {
            cout << third;
      
        }
    }
    else {
        if (second<third){
            cout << second;
        }
        else {
            cout << third;
        }
    }
    
    return 0;
}