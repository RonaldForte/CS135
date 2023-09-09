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

    double eastSt;
    string date;
    double min = 100;
    double max = eastSt;

    while(fin >> date >> eastSt) {
        fin.ignore(INT_MAX, '\n'); 
        if(eastSt < min){
            min = eastSt;
        }
        if(eastSt > max){
            max = eastSt;
        }
    }
    cout << "Minimum storage in East basin: " << min << endl;
    cout << "MAXimum storage in East basin: " << max << endl;
fin.close();

return 0;
}