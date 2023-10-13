// #include<iostream>
// #include<string>
// using namespace std;

// //
// int sum(int x,int y) { //declaration+definition
//     return(x+y); //job of function is to return some of args passed into it.
// } 

// int main() {
//     cout<<sum(5,7); //function call
// return 0;
// }

#include<iostream>
#include<string>
using namespace std;

int sum(int a,int b); //function declaration 

int main() {
   cout<<sum(2,4);
return 0;
}

int sum(int a, int b) { //function definition
    return(a+b);
}