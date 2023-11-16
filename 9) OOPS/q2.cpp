// illustrate use of access specifiers 
#include<bits/stdc++.h>
using namespace std;
int var=5;
class m {
    public:
    int met();
};
int m::met() {  //using scope resolution operator to specify function belongs to m class
    cout<<"Hello World";
}
int main() {
    int var=10;
    cout<<"Local Variable: "<<var<<endl;
    cout<<"Gloval Variable: "<<::var; //accessing value of global var using src.
    m m1;
    m1.met();
}