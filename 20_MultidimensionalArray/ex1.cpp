// Multidimensional Array in C++

#include <iostream>
using namespace std;

int main() {
    // 2D array
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Accessing elements of a 2D array
    cout << "Elements of 2D array: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << endl;
        }
    }

    return 0;
}