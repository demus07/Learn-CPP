//illustrate working of object and class
#include<bits/stdc++.h>
using namespace std;
class S1 {
    public:
    int marks;
    string name;
};
int main() {
    S1 a1;
    a1.marks=20;
    a1.name="Ram";
    S1 a2;
    a2.marks=30;
    a2.name="Jay";
    if(a2.marks>a1.marks)
    cout<<a2.name<<" has scored more than "<<a1.name;
    else
    cout<<a1.name<<" has scored more than "<<a2.name;

}