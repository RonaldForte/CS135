// Ronald A Forte Jr.
// 
// 
// 
// 
// 
// 
// 
// 

#include<iostream>
using namespace std;

class Profile{
    public: 
        Profile(string usrn, string dspn);
        Profile();
        string getUsername();
        string getFullName();
        void setDisplayName(string dspn);
    private: 
        string username;
        string displayname;
};

Profile::Profile(string usrn, string dspn){
    username=usrn;
    displayname=dspn;
}
Profile::Profile(){
    username= "";
    displayname= "";
}
string Profile::getUsername(){
    return username;
}
string Profile::getFullName(){
    displayname = displayname + " (@" + username + ")";
    return displayname;
}
void Profile::setDisplayName(string dspn){
    displayname = dspn;
}

int main() {
    Profile p1("marco", "Marco");    
    cout << p1.getUsername() << endl; // marco
    cout << p1.getFullName() << endl; // Marco (@marco)

    p1.setDisplayName("Marco Rossi"); 
    cout << p1.getUsername() << endl; // marco
    cout << p1.getFullName() << endl; // Marco Rossi (@marco)
    
    Profile p2("tarma1", "Tarma Roving");    
    cout << p2.getUsername() << endl; // tarma1
    cout << p2.getFullName() << endl; // Tarma Roving (@tarma1)
}
