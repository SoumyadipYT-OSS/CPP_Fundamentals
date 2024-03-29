#include <iostream>
#include <cwchar>   // for wide character I/O

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
    c = 90000L;      // c is now 90000L
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
    unsigned int f = 400000;
    cout << "f = " << f << endl;
    f = (unsigned int) 70503200;
    cout << "f = " << f << endl;


    /*
        In C++, 'unsigned long' datatype takes 4 bytes of memory.
    */
    cout << "Size of unsigned long: " << sizeof(unsigned long) << " bytes" << endl;
    unsigned long g = 4000000000;
    cout << "g = " << g << endl;
    g = 5000000000L;      // g is now 5000000000
    cout << "g = " << g << endl;


    /*
        In C++, 'unsigned long long' datatype takes 8 bytes of memory.
    */
    cout << "Size of unsigned long long: " << sizeof(unsigned long long) << " bytes" << endl;
    unsigned long long h = 4000000000;
    cout << "h = " << h << endl;
    h = 5000000000;      // h is now 5000000000
    cout << "h = " << h << endl;


    /*
        In C++, 'unsigned short' datatype takes 2 bytes of memory.
    */
    cout << "Size of unsigned short: " << sizeof(unsigned short) << " bytes" << endl;
    unsigned short i = 60000;
    cout << "i = " << i << endl;
    i = 65000;      // i is now 65000
    cout << "i = " << i << endl;



    /*
        In C++, 'long double' datatype takes 12 bytes of memory.
    */
    cout << "Size of long double: " << sizeof(long double) << " bytes" << endl;
    long double j = 3.14159265358979323846;
    cout << "j = " << j << endl;
    j = 2.71828182845904523536;      // j is now 2.71828182845904523536
    cout << "j = " << j << endl;



    /*
        In C++, 'wchar_t' datatype takes 2 bytes of memory.
    */
    cout << "Size of wchar_t: " << sizeof(wchar_t) << " bytes" << endl;
    wchar_t wideChar = L'₹';
    wcout << "wideChar = " << wideChar << endl;
    wideChar = L'ॐ';      // wideChar is now ॐ

    const wchar_t* wideString = L"जय हिंद जय भारत वन्दे मातरम् जय श्री राम जय श्री कृष्ण जय श्री हनुमान जय माता काली माता";
    wcout << "wideString = " << wideString << endl;



    /*
        In C++, 'string' datatype is a class and it takes 24 bytes of memory.
    */
    cout << "Size of string: " << sizeof(string) << " bytes" << endl;
    string str = "श्रीमत् भगवत् गीता";
    cout << "str = " << str << endl;
    str = "संस्कृतभाषा विश्वस्य सर्वोत्तमा प्राचीना च भाषा अस्ति।";      // str is now "संस्कृतभाषा विश्वस्य सर्वोत्तमा प्राचीना च भाषा अस्ति।"
    cout << "str = " << str << endl;



    /*
        In C++, 'wstring' datatype is a class and it takes 24 bytes of memory.
    */
    cout << "Size of wstring: " << sizeof(wstring) << " bytes" << endl;
    wstring wideStr = L"शिवपुराणम्";
    wcout << "wideStr = " << wideStr << endl;
    wideStr = L"शिवपुराणम् एकम् अत्यन्तम् महत्त्वम् अस्ति।";      // wideStr is now "शिवपुराणम् एकम् अत्यन्तम् महत्त्वम् अस्ति।"
    wcout << "wideStr = " << wideStr << endl;




    /*
        In C++, 'void' datatype takes 1 byte of memory.
    */
    void* ptr = nullptr;
    cout << "ptr = " << ptr << endl;
    ptr = &x;      // ptr is now the address of x
    cout << "ptr = " << ptr << endl;


    return 0;

}