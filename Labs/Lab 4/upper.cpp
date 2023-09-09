//Ronald A Forte Jr
#include <iostream>
using namespace std;

int main () {
    int length, row, col, i;
    cout << "Enter side length: ";
    cin >> length;
    cout << "Shape: " << endl;

    for(row = 0; row < length; row++) {
        for(col = 0; col < row; col++) {
            cout << " ";
        }
        for(i = length; i > row; i--){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}