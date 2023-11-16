#include<bits/stdc++.h>
using namespace std;

class rect {
    public:
    int length,breadth;
    rect(int l, int b) {
        length=l;
        breadth=b;
    }
    int area() {
        return(length*breadth);
    }
};
int main() {
    rect x(4,3);
    cout<<x.area();
}
