#include <iostream>

using namespace std;

int main() {
    cout << "Variable Memory Concepts" << endl;
    cout << "-------------------------" << endl;
    /*
        In C++, 'int' datatype takes 4 bytes of memory.
    */
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    int x = 99;
    cout << "x = " << x << endl;
    x = 100;        // x is now 100
    cout << "x = " << x << endl;


    /*
        In C++, 'float' datatype takes 4 bytes of memory.
    */
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    float y = 3.14;
    cout << "y = " << y << endl;
    y = 2.71;       // y is now 2.71
    cout << "y = " << y << endl;


    /*
        In C++, 'char' datatype takes 1 byte of memory.
    */
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    char z = 'A';
    cout << "z = " << z << endl;
    z = 'B';        // z is now 'B'
    cout << "z = " << z << endl;


    /*
        In C++, 'bool' datatype takes 1 byte of memory.
    */
    cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;
    bool a = false;
    cout << "a = " << a << endl;
    a = true;      // a is now true
    cout << "a = " << a << endl;


    /*
        In C++, 'double' datatype takes 8 bytes of memory.
    */
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    double b = 3.14159;
    cout << "b = " << b << endl;
    b = 2.71828;      // b is now 2.71828
    cout << "b = " << b << endl;


    /*
        In C++, 'long' datatype takes 4 bytes of memory.
    */
    cout << "Size of long: " << sizeof(long) << " bytes" << endl;
    long c = 2000000;
    cout << "c = " << c << endl;
    c = 9000000000;      // c is now 9000000000
    cout << "c = " << c << endl;


    /*
        In C++, 'long long' datatype takes 8 bytes of memory.
    */
    cout << "Size of long long: " << sizeof(long long) << " bytes" << endl;
    long long d = 8500000000;
    cout << "d = " << d << endl;
    d = 9000000000000000000;      // d is now 9000000000000000000
    cout << "d = " << d << endl;


    /*
        In C++, 'short' datatype takes 2 bytes of memory.
    */
    cout << "Size of short: " << sizeof(short) << " bytes" << endl;
    short e = 30000;
    cout << "e = " << e << endl;
    e = 32000;      // e is now 32000
    cout << "e = " << e << endl;


    /*
        In C++, 'unsigned int' datatype takes 4 bytes of memory.
    */
    cout << "Size of unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
    unsigned int f = 4000000000;
    cout << "f = " << f << endl;
    f = 5000000000;      // f is now 5000000000
    cout << "f = " << f << endl;


    /*
        In C++, 'unsigned long' datatype takes 4 bytes of memory.
    */
    cout << "Size of unsigned long: " << sizeof(unsigned long) << " bytes" << endl;
    unsigned long g = 4000000000;
    cout << "g = " << g << endl;
    g = 5000000000;      // g is now 5000000000
    cout << "g = " << g << endl;
}