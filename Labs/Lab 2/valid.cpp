/* Author: Ronald Forte Jr
Course: CSCI-135 
Instructor: Genady Maryash 
Assignment: Homework 
Lab 2A: Asks the user to input an integer and of its out of range keep asking to re-enter */

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double num;
    cout << "Please enter an integer: ";
    cin >> num;

    while(num>99 || num<1)
    {
        cout << "Please re-enter an integer between 0-100: ";
        cin >> num;
    }

    num = pow(num, 2);
    cout << num;
    return 0;
}