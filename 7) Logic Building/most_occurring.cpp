#include<iostream>
using namespace std;
int main() {
    int arr[5]={10,30,5,20,10};
    int n=5;
    int temp,count=1;
    for(int i=0;i<5;i++) {
        if(arr[i]==arr[i+1]) {
            temp=arr[i];
            count++;
        }
    }
    cout<<"The most occuring element in the array is: "<<temp<<endl;
    cout<<"It occured for: "<<count<< "number of times";
}