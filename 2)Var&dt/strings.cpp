#include<iostream>
#include<string> //header file for using strings
using namespace std;
int main() {
    // strings are used for storing text (multiple chars)
    string str="hello world";
    cout<<str<<endl;
    // concatenation
    string fname="Sumedh";
    string lname="Kudav";
    string fullname= fname+lname;
    cout<<fullname<<endl;
    // checking the index
    string index="Hello";
    cout<<index[4];
    return 0;
}