#include<iostream>
using namespace std;

int addNumbers(int x, int y) {
    int ans = x + y;
    return ans;
}

int addNumbers(int x, int y, int z) {
    int ans = x + y + z;
    return ans;
}

// main method
int main() {
    int a = 5;
    int b = 10;
    int sum = addNumbers(a, b);
    cout << "The sum of " << a << " and " << b << " is: " << sum << endl;

    int c = 15;
    sum = addNumbers(a, b, c);
    cout << "The sum of " << a << ", " << b << " and " << c << " is: " << sum << endl;
    return 0;
}
