#include<iostream>
#include<string>
using namespace std;

int add(int x, int y) {
    return(x+y);
}

int sub(int x, int y) {
    return(x-y);
}

int mul(int x, int y) {
    return(x*y);
}

int divi(int x, int y) {
    return(x/y);
}

void main() {
    cout<<"Enter two numbers;"<<endl;
    int a,b;
    cin>>a;
    cin>>b;
    cout<<add(a,b)<<endl;
    cout<<sub(a,b)<<endl;
    cout<<mul(a,b)<<endl;
    cout<<divi(a,b)<<endl;
 }