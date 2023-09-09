/* Author: Ronald Forte Jr
Course: CSCI-135 
Instructor: Genady Maryash 
Assignment: Homework 
Lab3A: Asks user for a string that represents the day and prints out the East Basin Storage on that day*/

#include <fstream>
#include <cstdlib>
#include <climits>
#include <iostream>
using namespace std;

int main(){
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }
    string junk;
    getline(fin, junk);

    string date, inp;
    double eastSt;
    
    cout << "Input a string representing the date in (MM/DD/YYYY) format" << endl;
    cin >> inp;

    while(fin >> date >> eastSt) { 
        fin.ignore(INT_MAX, '\n'); 
        if(inp == date){
            cout << eastSt << " billion gallons";
        }
    }

    fin.close();
    return 0;
}