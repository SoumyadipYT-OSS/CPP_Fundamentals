#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Element  -  Value" << endl;

    for (int i=0; i<=4; i++) {
        arr[i] = 99;

        cout << i << "  ------  " << arr[i] << endl;
    }
}