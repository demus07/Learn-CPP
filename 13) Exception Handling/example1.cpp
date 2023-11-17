#include<bits/stdc++.h>
using namespace std;
int main() {
    int num1,num2;
    cout<<"Enter a number: "<<endl;
    cin>>num1;
    cout<<"Enter number to divide with:"<<endl;
    cin>>num2;
    try {
        if(num2!=0)
        cout<<num1%num2<<endl;
        else
        throw(num2);
    }
    catch(int num){
        cout<<"Cannot divide by 0";
    }
}