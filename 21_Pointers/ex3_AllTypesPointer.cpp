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


    int DoublePointer() {
        double c = 123.456;
        double *r;
        r = &c;

        cout << "Size of double: " << sizeof(double) << " bytes" << endl;
        cout << "Size of double pointer 'r': " << sizeof(double*) << " bytes" << endl;
        cout << "Address = " << r << ", value = " << *r << endl;

        return 0;
    }


    int VoidPointer() {
        void *vp;
        int a = 1025;
        vp = &a;

        cout << "Size of void pointer 'vp': " << sizeof(void*) << " bytes" << endl;
        cout << "Address = " << vp << endl;

        return 0;
    }
};