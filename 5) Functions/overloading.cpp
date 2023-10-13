#include<iostream>
#include<string>
using namespace std;

 int sum(int a, int b) {
    return(a+b);
 }

 int sum(int x, int y, int z) {
    return(x+y+z);
 }

 int main() {
    cout<<sum(2,4)<<endl;
    cout<<sum(3,6,9);
    return 0;
}