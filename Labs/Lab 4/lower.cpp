//Ronald A Forte Jr
#include <iostream>
using namespace std;

int main(){
    double length;
    cout << "Input side length: ";
    cin >> length;

    for(int row = 1; row <= length; row++){
        for(int col = 1; col <= row; col++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}