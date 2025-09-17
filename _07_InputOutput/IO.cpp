#include<iostream>
#include<string>

using namespace std;


int Example1() {
    // Printing a text
    cout << "C++ Learning" << endl;

    int a = 100;
    // Printing variable 'a' using cout
    cout << a << endl;

    return 0;
}


int Example2() {
    int prodId;
    cout << "Enter product id: ";
    cin >> prodId;

    cout << "Product id: " << prodId << endl;


    string prodName;
    cout << "Enter product name: ";
    cin.ignore();   // avoid 'enter' key from keyboard
    getline(cin, prodName);     // we need 'include<string>' library for 'getline' method

    cout << "Product Name: " << prodName << endl;

    return 0;
}


int Example3() {
    cerr << "An error occurred" << endl;

    return 0;
}


int Example4() {
    clog << "Buffered Standard Error Stream - clog" << endl;

    return 0;
}


int main() {
    Example1();
    Example2();
    Example3();
    Example4();

    return 0;
}
