//Ronald
#include <iostream>
using namespace std;

int main()
{
    double height;
    double width;
    cout << "Enter width: "; // asks for width
    cin >> width;
    cout << "Enter height: "; // asks for height
    cin >> height;
    cout << "Shape: "  << endl; // prints the "shape: "

    for(int row = 0; row < height; row++){ // First for loop that iterates the row
        for(int col = 0; col < width; col++){ // Second loop that iterates the col
            cout << "*"; // prints stars for every row and col
        }
        cout << " " << endl; //prints
    }
    return 0;
}