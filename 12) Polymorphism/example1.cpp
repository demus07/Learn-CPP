#include<bits/stdc++.h>
using namespace std;
int add(int a, int b, int c) {
    return(a+b+c);
}
int add(int a, int b) {
    return(a+b);
}
int add(int a) {
    return(++a);
}
int main() {
    cout<<add(4,2,1)<<endl;
    cout<<add(3,1)<<endl;
    cout<<add(2);
}