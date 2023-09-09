/* Author: Ronald Forte Jr
Course: CSCI-135 
Instructor: Genady Maryash 
Assignment: Homework 
Lab3C: Compares the dates */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main()
{
    ifstream fin ("Current_Reservoir_Levels.tsv");
    if (fin.fail())
    {
        cerr << "File cannot be opened for reading. " << endl;
        exit(1);
    }
    string junk, date, start_date, end_date;
    float eastSt, westSt, eastEl, westEl;
    bool start = false;

    cout << "Enter start date: ";     //asks for the start date
    cin >> start_date;     //takes the input

    cout << "Enter end date: ";     //asks for the end date
    cin >> end_date;     //takes the input

    getline(fin, junk);

    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl)
    {
        fin.ignore(INT_MAX, '\n');
        if (start_date == date)
        {
            start = true;     
        }

        if (start == true)    
        {
            if (westEl > eastEl){     
                cout << date << " " << "West" << endl;     
            } if (eastEl > westEl){     
                cout << date << " " << "East" << endl;     
            } if (eastEl == westEl){     
                cout << "Equal" << endl;
            }
        }

        if (end_date == date){    
            break;   
        }
    }
}