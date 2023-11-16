#include<bits/stdc++.h>
using namespace std;

class volar {
    public:
    double length,breadth,height;
    double area(){ //method
        return (length*breadth);
    }
    double volume() {
        return(length*breadth*height);
    }
};
int main() {
    volar x;
    x.length=5;
    x.breadth=7;
    x.height=10;
    cout<<"Area is: "<<x.area()<<endl;
    cout<<"Volume is: "<<x.volume()<<endl;

}
