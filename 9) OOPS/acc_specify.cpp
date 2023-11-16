#include<bits/stdc++.h>
using namespace std;

class a1 {
    public:
    int a;
    private:
    int b;
};
int main() {
    a1 x;
    x.a=30;
    return x.a;
    // x.b=10; 
    // B cant be accessed because of private access specifier.
    // return x.b;

}