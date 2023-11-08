#include<iostream>
using namespace std;

int reverse(int arr[6]) {
    int start=0,end=5;
    int temp;
    while(start<end) {
        temp=arr[end];
        arr[end]=arr[start];
        arr[start]=temp;
        start++; end--;
    }
}
int display(int arr[6]) {
    for(int i=0;i<6;i++) 
    cout<<arr[i]<<",";
}
int main() {
    int arr[6]={1,2,3,4,5,6};
    reverse(arr);
    display(arr);
}