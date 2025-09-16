#include<iostream>

using namespace std;


void Examples_DataTypes() {
    // Character data type
    char c = 'A';
    cout << c << endl;

    // Integer data type
    int x = 25;
    cout << x << endl;
    x = 0x15;   // using hexadecimal base value
    cout << x << endl;

    // Boolean data type
    bool isTrue = true;
    cout << isTrue << endl;

    // Floating Point data type (float)
    float f = 36.5;
    cout << f << endl;

    // Double data type (double)
    double pi = 3.14159;
    cout << pi << endl;
}

int DataTypeConversion() {
    int n = 3;
    char c = 'C';

    // Convert char data type into integer
    cout << (int)c << endl;
    int sum = n + c;
    cout << sum << endl;
    
    return 0;
}


int sizeOfDataTypes() {
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;

    return 0;
}


void DataTypeModifiers() {
    // signed
    signed int temperature = -15;
    cout << "Temperature: " << temperature << "°C" << endl;
    
    // unsigned
    unsigned int packetCount = 500;
    cout << "Packets received: " << packetCount << endl;

    // short
    short int retryLimit = 3;
    cout << "Retry Limit: " << retryLimit << endl;

    // long
    long int totalBytes = 1000000000;
    cout << "Total bytes transferred: " << totalBytes << endl;
}



int main() {
    Examples_DataTypes();
    DataTypeConversion();
    sizeOfDataTypes();
    DataTypeModifiers();

    return 0;
}