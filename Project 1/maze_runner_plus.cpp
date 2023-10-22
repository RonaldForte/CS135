/* Author: Ronald Forte Jr
Course: CSCI-135 
Instructor: Genady Maryash 
Assignment: Homework 
Project2: Write a better version of the program called maze_runner_plus.cpp that can evaluate multiple direction lists.
Let’s use the semicolon symbol that must be used at the end of each direction in the input.*/

#include <iostream>
using namespace std;

int main()
{
    int maze[6][6] = {
        1,0,1,1,1,1,
        1,0,0,0,1,1,
        1,0,1,0,0,1,
        1,0,1,0,1,1,
        1,0,0,0,0,0,
        1,1,1,1,1,1,
    };
    int row = 0;
    int col = 1;
    string s;
    while (getline(cin, s, ';')){ 
        for(int i=0; i<s.length(); i++){
            if (s[i] == 'R' && maze[row][col+1]==0){
                col++;
            } else if (s[i] == 'L' && maze[row][col-1]==0){ 
                col--;
            } else if (s[i] == 'U' && maze[row-1][col]==0){
                row--;
            } else if (s[i] == 'D' && maze[row+1][col]==0){
                row++;
            }
        }



    if (row == 4 && col == 5){
        cout << "You got out of the maze" <<endl;
    } else {
        cout << "You are stuck in the maze" <<endl;
    }
    }
}