#include<iostream>
#include<string>
using namespace std;
int main() {
    double grade;
    cout<<"Enter your Grade: "<<endl;
    cin>>grade;
    if(grade>=90 && grade<=100) 
    cout<<"A Grade";
    else if(grade>=80 && grade<90)
    cout<<"B Grade";
    else if(grade>=60 && grade<80)
    cout<<"C Grade";
    else if(grade>=40 && grade<60)
    cout<<"D Grade";
    else if(grade<40)
    cout<<"F";
    else
    cout<<"Invalid Grade";
return 0;
}