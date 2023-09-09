/* Author: Ronald Forte Jr
Course: CSCI-135 
Instructor: Genady Maryash 
Assignment: Lab 
Task A: This program compares two numbers and finds the smallest int. */

#include <iostream>
using namespace std;

int main()
{
    int first, second;
    cout << "Enter a number: ";
    cin >> first;
    cout << "Enter a number: ";
    cin >> second;

    if (first < second) {
        cout << first;
    }
    else {
        cout << second;
    }
    return 0;
}

