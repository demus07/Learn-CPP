#include<bits/stdc++.h>
using namespace std;
class mayn {
    public:
    virtual void msg() {
        cout<<"Base Class";
    }
};
class derived:public mayn {
    public:
    void msg() {
        cout<<"Derived Class";
    }
};
int main() {
    mayn y;
    //y.msg();
    derived x;
    x.msg();
}