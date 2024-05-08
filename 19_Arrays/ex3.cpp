#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass(int x) : value(x) {}
    int value;
};

MyClass arr[] = {MyClass(1), MyClass(2), MyClass(3)};


// print the MyClass objects in the array
void displayArray(MyClass arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i].value << ", ";
    }
    cout << endl;
}


int main() {
    displayArray(arr, 3);
    return 0;
}
