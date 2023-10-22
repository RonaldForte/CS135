/* Author: Ronald Forte Jr
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Homework
Project1 Task B:
Write a program maze_runner_modded.cpp that can stream in a maze and set up the array 
then take in directions to see if they can traverse the custom maze.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	int row, col;
	int start_col;
	int start_row;
	int end_col;
	int end_row;
	char pp;
	int c;
	int r;
	string s;


	int maze[10][10];

	for(r = 0; r < 10; r++){
		for(c = 0; c < 10; c++){
			cin >>maze[r][c];
		}
	}
	
	cin>> start_row;
	cin >> start_col;
	cin >> end_row;
	cin >> end_col;
	cin >> pp;

	if(pp == ';'){
		r= start_row;
		c = start_col;
	}

	while(cin >> s){
		for(int i = 0; i <s.size(); i++){
			char dir = s[i];
			if(dir == 'R'){
				if(c != 9 && maze[r][c+1] == 0){
					c++;
				}
			}
			else if(dir == 'L'){
				if(c != 0 && maze[r][c-1]==0){
					c--;
				}
			}
			else if(dir == 'U'){
				if( r!= 0 && maze[r-1][c]==0){
					r--;
				}
			}
			else if(dir == 'D'){
				if(r!= 9 && maze[r+1][c]==0){
					r++;
				}
			}
			else if(dir == ';'){
				if(r == end_row && c== end_col){
					cout << "You got out of the maze."<< endl;
				}
				else{
					cout << "You are stuck in the maze." << endl;
				}
				r = start_row;
				c = start_col;
			}
		}
	}
	return 0;
}