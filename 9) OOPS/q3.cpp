// illustrate parameterized constructor
#include<bits/stdc++.h>
using namespace std;
class con {
    public:
    con(int a,int b) {
        cout<<a+b;
    }
};
int main() {
    con a(4,3);
}