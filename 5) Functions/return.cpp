#include<iostream>
#include<string>
using namespace std;
 // You can not use return keyword with void type function
 int sum(int n1, int n2) {
    return(n1+n2);
 }

 int main() {   
    int ans=0;
    int a=5,b=3;
    ans=sum(a,b);
    cout<<ans;
}