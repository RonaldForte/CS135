/* Author: Ronald Forte Jr
Course: CSCI-135 
Instructor: Genady Maryash 
Assignment: Homework 
Lab 2C: */

#include <iostream>
using namespace std;

int main(){
    int myData[10];
    for (int i = 0; i < 10; i++){
        myData[i]=1;
        cout << myData[i] << " ";
    } 
    int v, index;
        do{
            cout << "" << endl;
            cout << "Enter the cell index you would like to change: ";
            cin >> index;
            cout << "Enter what interger you would like this cell to be changed to: ";
            cin >> v;
            for(int i = 0; i < 10; i++){
                if(index<10 && index>=0){
                    myData[index] = v;
                    cout << myData[i] << " ";
            }
        }
        }while(index<10 && index>=0);
    if(index<0 || index>9){
        cout << "Shit is out of range. Program Exit.";
    }
return 0;
}   