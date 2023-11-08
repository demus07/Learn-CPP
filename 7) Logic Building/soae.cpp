#include<iostream>
using namespace std;
int main () {
    int n,arr[100];
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    cout<<"Enter the Elements of the Array:"<<endl;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int sum=0;
    for(int j=0;j<n;j++) {
        sum=sum+arr[j];
    }
    cout<<"The Sum of Array Elements are: "<<sum<<endl;
    
    return 0;
}