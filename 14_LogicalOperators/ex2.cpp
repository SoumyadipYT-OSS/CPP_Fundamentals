#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int age = 64;
    int money = 90000;

    if (age > 21) {
        if (money > 100000) {
            cout << "You are old and rich" << endl;
        } else {
            cout << "You are old, but not rich" << endl;
        }
    } else {
        if (money > 100000) {
            cout << "You are young, but rich" << endl;
        } else {
            cout << "You are young and poor" << endl;
        }
    }
}