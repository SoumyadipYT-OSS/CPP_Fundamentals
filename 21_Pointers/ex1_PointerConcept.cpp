#include <iostream>
using namespace std;

int main() {
    int a;
    int *p;
    p = &a;

    cout << "Address of a: " << &a << endl;
    cout << "Pointer 'p' addressing the address of 'a': " << p << endl;

    int b = 5;
    int *q;
    q = &b;
    cout << "\nValue of b: " << b << endl;
    cout << "Value of a using pointer 'q': " << *q << endl;
    p = &b;
    cout << "Address of a: " << &b << endl;
    cout << "Pointer 'q' addressing the address of 'b': " << q << endl;

    cout << "Size of integer variable 'a': " << sizeof(a) << "bytes" << endl;
    cout << "Size of pointer variable 'p': " << sizeof(p) << "bytes" << endl;
    cout << "Size of integer variable 'b': " << sizeof(b) << "bytes" << endl;
    cout << "Size of pointer variable 'q': " << sizeof(q) << "bytes" << endl;
    cout << "Size of integer pointer variable 'p': " << sizeof(*p) << "bytes" << endl;
    cout << "Size of integer pointer variable 'q': " << sizeof(*q) << "bytes" << endl;

    cout << "Address p+1: " << p+1 << endl;
    cout << "Address q+1: " << q+1 << endl;

    return 0;
}