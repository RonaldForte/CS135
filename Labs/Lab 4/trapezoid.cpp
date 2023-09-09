//Ronald A Forte Jr
#include <iostream>
using namespace std;

int main () {
    int width, height, row, col, ptr1, ptr2;
    cout << "Enter width: ";     //enter width
    cin >> width;
    cout << "Enter height: ";     //enter height
    cin >> height;

    ptr1 = 0;     //starting at 0
    ptr2 = width-1;    //start at the end (the user input's width)

    cout << "Shape: " << endl;

    if((height*2)-1 > width){
    cout << "Impossible shape!";
    return 0;
   }

    for(row = 0; row < height; row++) {
        for(col = 0; col < width; col++) {
            if(col >= ptr1 && col <= ptr2) {     //if the col is >= 1 and col <= the user's input for width, it will print out a star
                cout << "*";
            } else {
                cout << " ";     //if the if statement fails, it prints a space (both have to be true)
            }
        }
        ptr1++;     //0 increments by 1
        ptr2--;     //the end decrements by 1, both ptr1 and ptr2 increments and decrements after it moves to the next row
        cout << endl;
    } 
    return 0;
}