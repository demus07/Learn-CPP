//keyword enmum is used
//enum season{spring,summer,winter,fall};
#include<iostream>
using namespace std;
enum test{
    first=20,
    second,
    third=55
};

int main() {
    cout<<second<<endl; //if we dont assign value to 2nd then value from 1st is incremented by 1
}