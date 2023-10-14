#include<iostream>
#include<string>
using namespace std;
 float prime(int n) {
    int count=0;
    for(int i=1;i<=n;i++) {
        if(n%i==0)
        count++;
    }
    if(count==2)
    cout<<n <<" Is a Prime Number";
    else
    cout<<n <<" Is not a Prime Number";
    
 }
 void main() {
    int x;
    cout<<"Enter The Number to be checked: "<<endl;
    cin>>x;
    prime(x);
}