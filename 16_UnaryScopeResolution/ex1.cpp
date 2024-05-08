#include <iostream>
using namespace std;

// Unary Scope Resolution Operator
// It is used to access the global scope variable when there is a local variable with the same name.

int x = 10; // Global variable

int main() {
    int x = 20; // Local variable
    cout << "Local variable: " << x << endl; // 20
    cout << "Global variable: " << ::x << endl; // 10
    return 0;
}