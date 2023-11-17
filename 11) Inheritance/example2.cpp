#include<bits/stdc++.h>
using namespace std;

//First Base class
class vehicle {
public:
    vehicle() {
        cout<<"I am constructor of first base class."<<endl;
        cout<<"This is the vehicle class."<<endl;
    }
};
//Second base class
class car {
    public:
    car() {
        cout<<"I am constructor of second base class"<<endl;
        cout<<"This is the car class"<<endl;
    }
};
//Subclass which inherits from both vehicle and car
class sub:public vehicle,public car {};
int main() {
    sub obj;


}