#include<iostream>
using namespace std; 
int glc=5; 
// void f1() {
//     cout<<glc; //global variables can be accessed from anywhere 
// }
// int main() {
//     f1();
//     glc=10; //updating global variable 
//     cout<<glc;
// }

void f2() {
    int glc=10;
    cout<<glc<<endl;
    cout<<::glc;
}

int main() {
    f2();
    return 0;
}