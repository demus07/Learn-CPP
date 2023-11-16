#include<bits/stdc++.h>
using namespace std;

class parent {
    public:
    int p=4;
};
//class that will inherit from class "parent"
class child : public parent{
    public:
    int c=1;
};

int main() {
    child obj;
    cout<<obj.c+obj.p;

}