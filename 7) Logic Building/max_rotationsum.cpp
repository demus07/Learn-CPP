#include<bits/stdc++.h>
using namespace std;
//efficient solution - O(n)

int maxSum(int arr[], int n) {
    int csum=0;
    for(int i=0;i<n;i++) {
        csum=arr[i]+csum;
    }
    int cval=0;
    for(int i=0;i<n;i++) {
        cval+= i*arr[i];
    }
    int result=cval;
    for(int i=0;i<n;i++) {
        int next_val= cval-(csum-arr[i-1])+arr[i-1]*(n-1);
        cval= next_val;
        result=max(result,next_val);
    }
    return result;
}

int main() {
    int arr[]{1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<maxSum(arr,n);
}