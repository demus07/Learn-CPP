#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int m,int r) {
    int i=l;
    int j=m+1;
    int k=l;
    int temp[5];
    while (i<=m && j<=r) {
        if(arr[i]<=arr[j]) {
            temp[k]=arr[i];
            i++;
            k++;
        }
        else {
            temp[k]==arr[j];
            j++;
            k++;
        }
    }
    while(i<=m) {
        temp[k]=arr[i];
        i++;
        k++;
    }
    for(int p=l;p<=r;p++) {
        arr[p]=temp[p];
    }
}

void mergesort(int arr[],int l, int r) {
    if (l<r) {
        int m=(l+r)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

int main() {
    int arr[5];
    int arr_size=5;
    cout<<"Enter 5 elements in array: "<<endl;
    for(int i=0;i<5;i++)
    cin>>arr[i];
    cout<<"Before Sorting: "<<endl;
    for(int i=0;i<5;i++)
    cout<<arr[i]<<",";
    mergesort(arr,0,(arr_size-1));
    cout<<"After Sorting: "<<endl;
    for(int i=0;i<5;i++)
    cout<<arr[i]<<",";
}