#include <iostream>
using namespace std;

void printArray(int inputArray[], int sizeOfArray);


int main() {
    int arr1[3] = {20, 54, 675};
    int arr2[6] = {54, 24, 7, 8, 9, 99};

    cout << "Array 1: "<< endl;
    printArray(arr1, 3);
    cout << "\nArray 2: "<<endl;
    printArray(arr2, 6);
}


void printArray(int inputArray[], int sizeOfArray) {
    for (int i=0; i<sizeOfArray; i++) {
        cout << inputArray[i] << endl;
    }
}