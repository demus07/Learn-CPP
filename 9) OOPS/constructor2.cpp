#include<bits/stdc++.h>
using namespace std;
class con {
    public:
    string model,brand;
    int year;
    con(string n,string y, int x) {
        model=n;
        brand=y;
        year=x;
    }
};

int main() {
    con car("Chiron", "Bugatti", 2005);
    cout<<car.model<<","<<car.brand<<","<<car.year;
}