#include<bits/stdc++.h>
using namespace std;
class emp {
    public:
    int id,sal;
    string name;
    void insert(int i,int s, string n) {
        id=i;
        sal=s;
        name=n;
    }
    void show() {
        cout<<id<<","<<name<<","<<sal<<endl;
    }
};
int main() {
    emp e1;
    e1.insert(3,500,"Arjun");
    e1.show();
    emp e2;
    e2.insert(4,1000,"Ram");
    e2.show();
    if(e2.sal>e1.sal)
    cout<<e2.name<<" Earns more than "<<e1.name;
}