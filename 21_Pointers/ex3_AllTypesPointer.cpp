// All types of pointers in C++

#include <iostream>
using namespace std;

class Solution {
    int IntegerPointer() {
        int a = 1025;
        int *p;
        p = &a;

        cout << "Size of integer: " << sizeof(int) << " bytes" << endl;
        cout << "Size of integer pointer 'p': " << sizeof(int*) << " bytes" << endl;
        cout << "Address = " << p << ", value = " << *p << endl;

        return 0;
    }


    int FloatingPointer() {
        float b = 113.45f;
        float *q;
        q = &b;

        cout << "Size of float: " << sizeof(float) << " bytes" << endl;
        cout << "Size of float pointer 'q': " << sizeof(float*) << " bytes" << endl;
        cout << "Address = " << q << ", value = " << *q << endl;

        return 0;
    }
};