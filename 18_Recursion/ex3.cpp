#include <iostream>
#include <vector>
using namespace std;

class Fibonacci {
    vector<double> memo;

public:
    Fibonacci(int n) : memo(n+1, -1) {
        memo[0] = 0;
        memo[1] = 1;
    }

    double fib(int n) {
        if(memo[n] != -1) {
            return memo[n];
        }
        memo[n] = fib(n-1) + fib(n-2);
        return memo[n];
    }

    void printSeries(int n) {
        cout << "Fibonacci series of " << n << " is: ";
        for (int i=0; i<n; i++) {
            cout << fib(i) << " ";
        }
        cout << endl;
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n < 0) {
        cout << "Invalid input. Please enter a non-negative number." << endl;
        return -1;
    }
    Fibonacci fib(n);
    fib.printSeries(n);
    return 0;
}