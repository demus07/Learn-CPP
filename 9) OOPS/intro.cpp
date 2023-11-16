#include<bits/stdc++.h>
using namespace std;
class x {
public: //access specifier 
int a; // int attribute
string s; //string attribute
};

int main() {
    x obj;
    obj.a=10; //stores 10 in attribute i of class
    obj.s="Hello"; //stores hello in attribute s of class
    cout<<obj.a<<endl;
    cout<<obj.s<<endl;
}