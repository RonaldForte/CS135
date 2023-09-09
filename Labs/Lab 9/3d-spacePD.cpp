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

Coord3D* createCoord3D(double x, double y, double z){
    Coord3D *lol = new Coord3D;
    *lol = {x, y, z};
    return lol;
}

void deleteCoord3D(Coord3D *p){
    delete p;
}

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
    double x, y, z;
    cout << "Enter position: ";
    cin >> x >> y >> z;
    Coord3D *ppos = createCoord3D(x,y,z);
    
    cout << "Enter velocity: ";
    cin >> x >> y >> z;
    Coord3D *pvel = createCoord3D(x,y,z);

    move(ppos, pvel, 10.0);

    cout << "Coordinates after 10 seconds: " 
         << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;

    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);
}

