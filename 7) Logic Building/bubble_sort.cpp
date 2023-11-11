#include<iostream>
using namespace std;

int bsort(int arr[],int size) {
    cout<<"The Unsorted Array: "<<endl;
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<",";
    }
    int temp;
    for(int i=0;i<size;i++) {
        if(arr[i]>arr[i+1]) {
            temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
    }
    cout<<"The sorted array is: "<<endl;
    for(int j=0;j<size;j++) {
        cout<<arr[j]<<",";
    }
}


int main() {
    int n,arr[100];
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    bsort(arr,n);
    return 0;
}