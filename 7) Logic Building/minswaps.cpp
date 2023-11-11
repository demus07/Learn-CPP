#include<bits/stdc++.h>
using namespace std;
int minswap(int arr[], int size,int k) {
    int temp;
    int swap=0;
    for(int i=0;i<size;i++) {
        for(int j=0;j<i;j++) {
            if(arr[i]<k && arr[j]>k) {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                swap++;
            }
        }
    }
    for(int i=0;i<size;i++)
    cout<<arr[i];
    return swap;
}
int main() {
    int arr[]={2,7,9,5,8,7,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"Choose a number from the following: "<<endl;
    for(int i=0;i<7;i++) {
        cout<<arr[i]<<",";
    }
    cin>>k;
    cout<<"The number of swaps required are :"<< minswap(arr,n,k);
}