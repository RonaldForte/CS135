// Ronald A Forte Jr
// 
// 
// 
// 
// 
// 
// 
// 
// 
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

void move(Coord3D *ppos, Coord3D *pvel, double dt){
    double xprime, yprime, zprime;
    xprime = ppos -> x + pvel -> x * dt;
    yprime = ppos -> y + pvel -> y * dt;
    zprime = ppos -> z + pvel -> z * dt;
    ppos->x = xprime;
    ppos->y = yprime;
    ppos->z = zprime;
}

int main() {
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};

    move(&pos, &vel, 2.0); // object pos gets changed
    cout << pos.x << " " << pos.y << " " << pos.z << endl;
    // prints: 2 -10 100.4
}
