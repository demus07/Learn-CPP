#include<bits/stdc++.h>
using namespace std;
class met {
    public:
    int Myfunc(); //declaring function
};

int met::Myfunc() { //using scope resolution operator to specify tht Myfunc() belongs to the met class
    cout<<"Hello";
}

int main() {
    met m1;
    m1.Myfunc();
}