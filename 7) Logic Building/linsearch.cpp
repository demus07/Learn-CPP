#include<iostream>
using namespace std;

int linsearch(int arr[30],int search,int n) {
    int temp=-1;
    for(int j=0;j<n;j++) {
        if(arr[j]==search) {
        cout<<"Element found at index; "<<j;
        temp=0;
        }
    }
    if(temp==-1)
    cout<<"Element not present in Array";
    // return -1; //element not found
}

int main() {
    int arr[30],n,search;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter the element to be searched: ";
    cin>>search;
    linsearch(arr,search,n);
}