#include <iostream>
using namespace std;

// Void function definition
void Namaskar() {
    cout << "GeeksForGeeks" << endl;
}

// Return-type function definiton
int square(int x) {
    return x * x;
}


int main() {
    // Calling the void function
    Namaskar();

    // Calling the return-type function
    int res = square(5);
    cout << "Square of 5 is: " << res << endl;

    return 0;
}