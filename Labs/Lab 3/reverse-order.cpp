/* Author: Ronald Forte Jr
Course: CSCI-135 
Instructor: Genady Maryash 
Assignment: Homework 
Lab3C: Compares the dates */

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

    string date = "";
    float eastSt, eastEl, westSt, westEl = 0.0;

    string dateArr[366];
    float eastStArr[366];
    float eastElArr[366];
    float westStArr[366];
    float westElArr[366];

    int i = 0;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
        fin.ignore(INT_MAX, '\n'); 

        dateArr[i] = date;
        eastStArr[i] = eastSt;
        eastElArr[i] = eastEl;
        westStArr[i] = westSt;
        westElArr[i] = westEl;

        i++;
    }
    fin.close();

    int start, stop = 0;

    string startDate, endDate;
    cout << "Enter start date: ";
    cin >> startDate;
    cout << "Enter end date: ";
    cin >> endDate;

    for(int j=0; j<366;j++){
        if(dateArr[j] == startDate){
            start = j;
        }
        if(dateArr[j] == endDate){
            stop = j;
        }
    }
    for(int k = stop; k>= start; k--){
        cout << dateArr[k] << " " << westElArr[k] << endl;
    }
    return 0;
}