#include<iostream>
#include<string>
using namespace std;
int main() {
    int n;
    int a[5000];
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int i,j;
    cout<<"Enter array elements: "<<endl;
    for(i=0;i<n;i++) 
        cin>>a[i];
    for(j=0;j<n;j++)
        cout<<"The Entered Array elements are: "<< a[j]<<endl;
    int sum=0;
    int avg;
    for(int k=0;k<n;k++) {
        sum=a[k]+sum;
    }
    cout<<"The Sum of Entered array elements are: "<<sum<<endl;
    cout<<"The average of Sum of elements are: "<<sum/n<<endl;
return 0;
}