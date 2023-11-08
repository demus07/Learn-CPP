#include<iostream>
using namespace std;

int largest(int x, int arr1[]) {
    int max=arr1[0];
    for(int i=1;i<x;i++) {
        if(max<arr1[i]) {
            max=arr1[i];
        }
    }
    cout<<"Max element in the array is: "<<max;
}

int main() {
    int n,arr[30];
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    largest(n,arr);

}