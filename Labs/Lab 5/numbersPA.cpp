//Ronald Forte JR
#include <iostream>
using namespace std;


bool isDivisibleBy(int n, int d){
    if ( d == 0) {
        return false;
    }
    if (n % d == 0) {
        return true;
    } else {
        return false;
    }
}

int main(){
    int n, d;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter another number: ";
    cin >> d;
    int x = isDivisibleBy(n, d);

    if(x==1){
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}