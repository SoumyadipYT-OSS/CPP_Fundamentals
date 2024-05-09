#include <iostream>
using namespace std;

int main() {
    int a = 1025;
    int *p;
    p = &a;

    cout << "Size of integer: " << sizeof(int) << " bytes" << endl;
    cout << "Address = " << p << ", value = " << *p << endl;

    char *p0;
    p0 = (char*)p; // Typecasting
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "Address = " << p0 << ", value = " << *p0 << endl;

    cout << "Address+1 = " << p0+1 << ", value = " << *(p0+1) << endl;

    return 0;
}