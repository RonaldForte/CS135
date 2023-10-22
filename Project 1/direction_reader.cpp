/* Author: Ronald Forte Jr
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Homework
Project1: Left up down right: 
This program reads a sequence of letters from cin and prints out its corresponding direction.

‘R’: go Right of the current location
‘L’: go Left of the current location
‘U’: go Up from the current location
‘D’: go Down from the current location
*/

#include <iostream>
using namespace std;

int main()
{
    string s;

    while (cin >> s)
    {
        if (s == "R")
        {
            cout << "Right" << endl;
        }
        else if (s == "L")
        {
            cout << "Left" << endl;
        }
        else if (s == "U")
        {
            cout << "Up" << endl;
        }
        else if (s == "D")
        {
            cout << "Down" << endl;
        }
        else
            cout << "Invalid Direction" << endl;
    }
}
