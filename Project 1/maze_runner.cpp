/* Author: Ronald Forte Jr
Course: CSCI-135 
Instructor: Genady Maryash 
Assignment: Homework 
Project2: 
Write a program maze_runner.cpp that reads from the cin a sequence of 
one or more letters and treat it as a list of directions that take you through the maze array 
to see whether or not you exit the maze at the correct location or not
*/

#include <iostream>
using namespace std;

int main()
{
    int maze[6][6] = 
    {1,0,1,1,1,1,
     1,0,0,0,1,1,
     1,0,1,0,0,1,
     1,0,1,0,1,1,
     1,0,0,0,0,0,
     1,1,1,1,1,1};

    char d;
    int r = 0, c = 1;
      while (cin >> d){
            if (d == 'R' && maze[r][c+1] == 0) {
                   c++;
               }
            else if (d == 'D' && maze[r+1][c] == 0) {
                r++;
              }
            else if (d == 'L' && maze[r][c-1] == 0) {
                c--;
            }
            else if (d == 'U' && maze[r-1][c] == 0) {
                r--;
            }

          }
       if(r == 4 && c == 5) {
           cout << "You got out of the maze.";
       }
       else {
           cout << "You are stuck in the maze.";
       }
}