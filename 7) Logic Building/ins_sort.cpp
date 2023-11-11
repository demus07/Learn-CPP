#include<bits/stdc++.h>
using namespace std;

void isort(int arr[], int n) {
    int key,j,i;
    for(i=0;i<n;i++) {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key) {
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=key;
    }

}

void print(int arr[],int n) {
    cout<<"The sorted array is: "<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<",";
}

int main() {
    int arr[]={12,11,13,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The Unsorted Array is: "<<endl;
    for(int i=0;i<n;i++) 
    cout<<arr[i]<<",";
    isort(arr,n);
    print(arr,n);
    return 0;
}