#include<bits/stdc++.h>
using namespace std;
class Count {
    private:
    int value;
    public:
    Count():value(8) {}
    //overloading ++ when used as prefix
    void operator ++ () {
        ++value; 
    }
    void display() {
        cout<<value;
    }
};

int main() {
    Count c1;
    ++c1; //increments value by 1
    c1.display();
}