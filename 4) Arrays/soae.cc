#include<iostream>
#include<string>
using namespace std;
int main() {
    int a[4];
    cout<<"Enter 4 elements to be passed: "<<endl;
    for(int i=0;i<4;i++) 
    cin>>a[i];
    int temp=0;
    for(int j=0;j<4;j++) {
        temp=a[j]+temp;
    }
    cout<<"The sum of array elements is: "<< temp;
return 0;
}