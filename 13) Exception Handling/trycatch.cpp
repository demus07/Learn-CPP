#include<bits/stdc++.h>
using namespace std;
int main() {
    try {
        int age=10;
        if(age>17) {
            cout<<"Eligible for voting."<<endl;
        }
        else
        throw(age);
    }
    catch(int random_int) {
        cout<<"Not eligible for voting"<<random_int<<endl;
    }
}