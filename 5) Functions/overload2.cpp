#include<iostream>
using namespace std;
int add(int n, int m, int l) {
    return(n+m+l);
}
int add(int d, int e) {
    return (d+e);
}
int main( ) {
    int a,b,x,y,z;
    cout<<"Enter 2 numbers: "<<endl;
    cin>>a;
    cin>>b;
    cout<<"Enter 3 numbers: "<<endl;
    cin>>x;
    cin>>y;
    cin>>z;
    cout<<add(a,b);
    cout<<add(x,y,z);
    return 0;
}