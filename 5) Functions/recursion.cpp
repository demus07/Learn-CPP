#include<iostream>
using namespace std;
//function tht calls itself is a recursive function. Technique is known as recursion.

int fact(int n) {
    if(n>1)
    return n*fact(n-1);  
    else 
    return 1;
}


int main() {
    fact(5);
    cout<<fact(5);
    return 0;
}