#include <iostream>
using namespace std;

void sort(int arr[]) {
    int temp;
    for (int i = 0; i < 4; i++) {
        int min = i;
        for (int j = i + 1; j < 5; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i) {
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}

int main() {
    int arr[5];
    cout << "Enter 5 elements in a random manner: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    cout << "Unsorted array: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << ",";
    }
    sort(arr);
    cout << "Sorted array: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << ",";
    }
    return 0;
}
