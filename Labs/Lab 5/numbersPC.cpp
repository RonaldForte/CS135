//Ronald Forte JR
#include <iostream>
using namespace std;


bool isDivisibleBy(int n, int d){
    if (d == 0) {
        return false;
    }
    if (n % d == 0) {
        return true;
    } else {
        return false;
    }
}

bool isPrime(int n){
    if (n<2){
        return false;
    }
    if (n==2){
        return true;
    }
    for(int i = 2; i<n; i++){ //2 to N-1
        if(isDivisibleBy(n, i)){
            return false;
        }
    }
    return true;
}

int nextPrime(int n){
    for(int i=n+1; i<28383782373837; i++){
        if(isPrime(i)){
            return i;
        }
    }
    return 0;
}

int main(){
    /*Task A
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

    return 0;*/

    /*Task B
    int n, d;
    cout << "Enter a number: ";
    cin >> n;
    int x = isPrime(n);
    
    if(x==1){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;*/

    //Task C
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int x = nextPrime(n);

    cout << x;

}

