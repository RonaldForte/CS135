//Ronald A Forte Jr
#include <iostream>
#include <string>
using namespace std;


int main(){
    string str;
    cout << "Input: ";

    getline(cin, str);

    //makes sure it counts spaces
    for(int i = 0; i < str.length(); i++){   //iterates through string 

        cout << str[i] << " " << int(str[i]) << endl;
        //prints with space in the middle 

    }
    return 0;
}


