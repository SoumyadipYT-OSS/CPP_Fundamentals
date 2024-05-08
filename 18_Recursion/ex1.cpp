#include <iostream>
using namespace std;

// here we take factorial example to implement recursion

int fact(int n) {
    if (n==0)
        return 1;
    else if (n==1)
        return 1;
    else
        return n*fact(n-1);
    
}


int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " is: " << fact(n) << endl;
    return 0;
}
