#include <iostream>
#include <vector>
using namespace std;

vector<int> memo;

int fact(int n) {
    if (n <= 1)
        return 1;
    else if (memo[n] != -1)
        return memo[n];
    
    memo[n] = n * fact(n-1);

    return memo[n];
}


int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    // user handling for wrong input
    if (n < 0) {
        cout << "Invalid input" << endl;
        return -1;
    }

    memo = vector<int>(n+1, -1);    // initialize memoization vector with -1
    cout << "Factorial of " << n << " is: " << fact(n) << endl;

    return 0;
}
