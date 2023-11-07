// structures are datatypes used to store values of different datatypes.
// keyword struct is used
/* Difference b/w structure and function: 
    Function is basically a procedure to execute logic
    Structure is used to reduce loc
Syntax :struct struct_name{
        mem1;
        mem2;
        mem3;
        mem4;
    };*/

#include<iostream>
using namespace std;
struct Person{ 
    char name[10];
    int age;
    double salary;
};

int Display(Person p1) {
    cout<<"Displaying the information"<<endl;
    cout<<"Name of the person is: "<<p1.name<<endl;
    cout<<"Age of the person is: "<<p1.age<<endl;
    cout<<"Salary of "<<p1.name<<" is: "<<p1.salary;
}

int main() {
    Person p1;  
    cout<<"Enter name: "<<endl;
    cin.get(p1.name,10);
    cout<<"Enter age: "<<endl;
    cin>>p1.age;
    cout<<"Enter Salary: "<<endl;
    cin>>p1.salary;
    Display(p1);

}