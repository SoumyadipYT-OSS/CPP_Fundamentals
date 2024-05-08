#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
private:
    static void displayArray(int arr[], int size) {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << ", ";
        }
        cout << endl;
    }

public:
    void type_WithoutInitialization() {
        int arr[5];
        int x = arr[0];    // Output: Garbage value
        cout << x << endl;
        cout << arr << endl;    // Output: Garbage value
    }

    void type_WithInitialization() {
        int arr[5] = {1, 2, 3, 4, 5};
        displayArray(arr, 5);
    }

    void type_PartialInitialization() {
        int arr[5] = {1, 2};    // Remaining elements will be initialized to 0
        displayArray(arr, 5);
    }

    void type_All_Elements_to_Zero() {
        int arr[5] = {0};    // All elements will be initialized to 0
        displayArray(arr, 5);
    }

    void type_All_Elements_to_Same_Value() {
        int arr[2] = {5, 5};    // All elements will be initialized to 5
        displayArray(arr, 2);
    }

    void type_SpecificValue() {
        int arr[5];
        std::fill(arr, arr+5, 10);    // All elements will be initialized to 10
        displayArray(arr, 5);
        std::fill(arr, arr+3, 4);   // First 3 elements will be initialized to 4
        displayArray(arr, 5);
    }

    void type_MultiDimensionalArray() {
        int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                cout << arr[i][j] << ", ";
            }
            cout << endl;
        }
    }

    void Array_of_Characters() {
        char arr[5] = {'a', 'b', 'c', 'd', 'e'};
        cout << arr << endl;    // Output: abcde

        char arr2[] = "Hello";
        cout << arr2 << endl;    // Output: Hello
    }
};

int main() {
    Solution solution;

    cout << "Without Initialization:" << endl;
    solution.type_WithoutInitialization();
    cout << "\nWith Initialization:" << endl;
    solution.type_WithInitialization();
    cout << "\nPartial Initialization:" << endl;
    solution.type_PartialInitialization();
    cout << "\nAll Elements to Zero:" << endl;
    solution.type_All_Elements_to_Zero();
    cout << "\nAll Elements to Same Value:" << endl;
    solution.type_All_Elements_to_Same_Value();
    cout << "\nSpecific Value:" << endl;
    solution.type_SpecificValue();
    cout << "\nMulti-Dimensional Array:" << endl;
    solution.type_MultiDimensionalArray();
    cout << "\nArray of Characters:" << endl;
    solution.Array_of_Characters();

    return 0;
}
