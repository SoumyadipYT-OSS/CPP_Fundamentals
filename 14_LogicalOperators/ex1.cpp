// Logical Operator in C++.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Logical Operator in C++" << endl;

    int age = 22;
    int money = 100000;
    
    if (age > 21 && money > 100000) {
        cout << "You are old and rich" << endl;
    } else if (age > 21 && money <= 100000) {
        cout << "You are old, but not rich" << endl;
    } else if (age <= 21 && money > 100000) {
        cout << "You are young, but rich" << endl;
    } else {
        cout << "Default Test Case" << endl;
    }
}