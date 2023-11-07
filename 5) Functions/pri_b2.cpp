#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a, b;
    cout << "Enter 2 Numbers:" << endl;
    cin >> a;
    cin >> b;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            cout << i << endl;
        }
    }
    return 0;
}
