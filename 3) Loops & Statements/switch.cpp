#include<iostream>
#include<string>
using namespace std;
int main() {
    int a;
    cout<<"Enter a number:"<<endl;
    cin>>a;
    switch(a) {
        case 1:
        cout<<"Entered number is 1";
        break;
        case 2:
        cout<<"Entered number is 2";
        break;
        default:
        cout<<"Entered number is neither 1 or 2";
    }
cout;
return 0;
}