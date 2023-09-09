/* Author: Ronald Forte Jr
Course: CSCI-135 
Instructor: Genady Maryash 
Assignment: Homework 
Lab 2B: Prints all integers from user specified range*/

#include <iostream>
using namespace std;

int main()
{
    double L, U;
    cout << "Enter the lowest number you would like to print: ";
    cin >> L;
    cout << "Enter the highest number you would like to print: ";
    cin >> U;
    
    for(int i = L; i < U; i++)
    {
    cout << i << " ";
    }
    return 0;
}