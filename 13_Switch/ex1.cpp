#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int age = 20;

    switch (age) {
        case 16:
            cout << "Too young" << endl;
            break;
        case 18:
            cout << "Adult" << endl;
            break;
        case 20:
            cout << "20 years old" << endl;
            break;
        default:
            cout << "This is the default case" << endl;
    }
}
