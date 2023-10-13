#include<iostream>
#include<string>
using namespace std;
 // The default argument should always be last if not using multiple default args
 int test(int a,int b,int c=4) {
    return(a+b+c);
 }
int main() {
    cout<<test(4,3); //If argument for c is passed here, the default arg value is ignored 
return 0;
}