/* Author: Ronald Forte Jr
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Homework
Lab 1C This program asks user for year and month and prints the amount of days that are in it (consideing leap years)*/

#include <iostream>

using namespace std;

int main() {

    int year,month;
    cout << "Please enter a year number (1999, 2016, etc.): " << endl; //user input required
    cin >> year;
    cout << "Please enter the month from 1-12 with 1 being January and 12 being December: " << endl; 
    cin >> month;

   
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) { 
        cout << "31 days" << endl;
    } else if(month == 4 || month == 6 || month == 9 || month == 11) { 
        cout << "30 days" << endl;
    } else if(month == 2 && ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0)) { 
        cout << "29 days" << endl;
    } else if(month == 2) { 
        cout << "28 days" << endl;
    }

    return 0;
}