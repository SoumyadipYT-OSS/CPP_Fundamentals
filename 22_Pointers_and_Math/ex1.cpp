#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int *p0 = &arr[0];
    int *p1 = &arr[1];
    int *p2 = &arr[2];

    cout << "p0 is at: " << p0 << endl;
    cout << "p1 is at: " << p1 << endl;
    cout << "p2 is at: " << p2 << endl;

    p0 += 2;
    cout << "p0 is now at: " << p0 << endl;
    cout << "p2 is at: " << p2 << endl;
}