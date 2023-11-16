#include<bits/stdc++.h> 
using namespace std;
// a class is made abstract by declaring atleast one of its function as pure virtual function. ex function=0;
//base class
class shape {
    public:
    virtual int getArea()=0; //pure virtual function
    int height,width;
    void setWidth(int w) {
        width=w;
    }
    void setHeight(int h) {
        height=h;
    }
};
class Rectangle:public shape {
    public:
    int getArea() {
        return (width*height);
    }
};
class Triangle:public shape {
    public:
    int getArea() {
        return(width*height)/2;
    }
};

int main() {
    Rectangle r;
    Triangle t;
    r.setHeight(5);
    r.setWidth(10);
    cout<<"Area of rectangle: "<<r.getArea()<<endl;
    t.setHeight(7);
    t.setWidth(4);
    cout<<"Area of Triangle: "<<t.getArea();
}