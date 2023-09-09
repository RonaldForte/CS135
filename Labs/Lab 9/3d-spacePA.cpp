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
    double OP = sqrt(pow(p-> x,2)+pow(p->y,2)+pow(p->z,2));
    return OP;
}


int main() {

    Coord3D pointP = {10, 20, 30};
    cout << length(&pointP) << endl; // would print 37.4166
}