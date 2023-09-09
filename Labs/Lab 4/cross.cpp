//Ronald A Forte Jr
#include <iostream>
using namespace std;

int main(){
    double size;
    cout << "Input size: ";
    cin >> size;
    cout << "Shape : " << endl;

    for (int row = 1; row <= size; row++){
        for (int col = 1; col <= size; col++){
            if((row==col)||(col== ((size+1)-row))){
                cout<< "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }  
}