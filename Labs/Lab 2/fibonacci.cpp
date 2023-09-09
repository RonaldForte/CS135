/* Author: Ronald Forte Jr
Course: CSCI-135 
Instructor: Genady Maryash 
Assignment: Homework 
Lab2D: Fibonacci numbers*/

#include <iostream>
using namespace std;

int main()
{
    int fib[60];

    fib[0] = 0;
    fib[1] = 1;

    cout << fib[0] << endl;
    cout << fib[1] << endl; 

    for (int i = 2; i < 60; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        cout << fib[i] << endl;
    }
}