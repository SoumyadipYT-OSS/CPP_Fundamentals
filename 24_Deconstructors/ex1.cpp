#include <iostream>
#include "Wheel.cpp"
using namespace std;

int main() {
    cout << "I am the constructor!" << endl;
    Wheel wObj;
    cout << "Wheely done!" << endl;
    // Deconstructor is called when the object goes out of scope, it will be called automatically.

    return 0;
}