#include<iostream>
using namespace std;

int binsearch(int arr[5],int left, int right, int search) {
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==search)
        return mid;
        else if(arr[mid]<search)
        left=mid+1;
        else
        right=mid-1;
    }
    return -1;
}

int main() {
    int arr[5]={1,2,5,6,7};
    int n=5,x;
    cout<<"Enter the element to be searched: "<<endl;
    cin>>x;
    binsearch(arr,0,n,x);
    int result=binsearch(arr,0,n,x);
    if(result==-1)
    cout<<"Element not found in array";
    else
    cout<<"Element found at index: "<<result;
}