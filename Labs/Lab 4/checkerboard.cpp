//Ronald A Forte Jr
#include <iostream>
using namespace std;

int main()
{
    int height;
    int width;
    cout << "Enter width: " << endl;
    cin >> width;
    cout << "Enter height: " << endl;
    cin >> height;
    for (int row = 0; row < height; row++)  {
        for (int col = 0; col < width; col++) {
            if (row % 2 == 0) {
                if (col % 2  == 0 ) {
                 cout << "*";}
                else {
                 cout << " ";
                }
            }
            if (row % 2  != 0 ) {
                if (col % 2  == 0 ) {
                 cout << " "; }
                else {
                 cout << "*";
                }
            }  
        }
         cout << endl;
    }
    return 0;
}