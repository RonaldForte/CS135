// Ronald A Forte Jr
#include <iostream>
#include <cmath>
using namespace std;

class Coord3D {
    public:
    double x;
    double y;
    double z;
};

double length(Coord3D *p){
    double length = sqrt(pow(p-> x,2)+pow(p->y,2)+pow(p->z,2));
    return length;
}

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    double p1_length = sqrt(pow(p1-> x,2)+pow(p1->y,2)+pow(p1->z,2));
    double p2_length = sqrt(pow(p2-> x,2)+pow(p2->y,2)+pow(p2->z,2));
    if(p1_length>p2_length){
        return p1;
    }
    else{
        return p2;
    }
}


int main() {
    Coord3D pointP = {10, 20, 30};
    Coord3D pointQ = {-20, 21, -22};

    cout << "Address of P: " << &pointP << endl;
    cout << "Address of Q: " << &pointQ << endl << endl;

    Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
   
    cout << "ans = " << ans << endl; // So which point is farther?
}

