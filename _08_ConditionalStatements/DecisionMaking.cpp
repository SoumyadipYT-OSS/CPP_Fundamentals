#include <iostream>
using namespace std;

// if Statement
int Example1() {
    int age = 19;

    if (age > 18) {
        cout << "You can do a driving license" << endl;
    }

    return 0;
}


// if-else statement
int Example2() {
    int n = 5;

    if (n > 0) {
        cout << "number is positive." << endl;
    } else {
        cout << "number is non-positive" << endl;
    }

    return 0;
}


// if-else-if ladder
int Example3() {
    int price = 20;

    if (price < 15) {
        cout << "8 percent discount" << endl;
    } else if (price >= 15  &&  price < 20) {
        cout << "10 percent discount" << endl;
    } else {
        cout << "12 pecent discount" << endl;
    }

    return 0;
}


// Nested if else
int Example4() {
    int n = 44;
    if (n > 0) {
        if (n % 2 == 0) {
            cout << "positive and even number" << endl;
        } else {
            cout << "positive and odd number" << endl;
        }
    } else if (n == 0) {
        cout << "the number is zero" << endl;
    } else {
        cout << "the number is negative" << endl;
    }

    return 0;
}


// Switch case statement
int Example5() {
    char c = 'B';
    switch (c) {
        case 'A':
            cout << "Character A" << endl;
            break;
        case 'B':
            cout << "Character B" << endl;
            break;
        case 'C':
            cout << "Character C" << endl;
            break;
        default:
            cout << "Invalid input";
            break;
    }

    return 0;
}


// Ternary Operator
int Example6() {
    int num1 = 10, num2 = 40;
    int max;

    max = (num1 > num2) ? num1 : num2;
    cout << max;

    return 0;
}


// Jump Statements
int Example7() {
    cout << "Break Statement" << endl;
    // 1. break statement
    for (int i=0; i<5; i++) {
        if (i == 3) {
            break;
        }
        cout << i << endl;
    }

    cout << "Continue Statement" << endl;
    // 2. continue statement
    for (int i=0; i<5; i++) {
        if (i == 2) {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}


// Jump Statment: goto statement
int Example8() {
    int age = 16;

    if (age < 18) {
        goto NotEligible;
    }
    cout << "You are eligible for voting." << endl;
    return 0;

NotEligible:
    cout << "You are not eligible for voting." << endl;
    return 0;
}


// Jump Statement: goto statement (real-world example)
int Example9() {
    int attempts = 0;
    string password;

Retry:
    cout << "Enter password: ";
    cin >> password;
    attempts++;

    if (password != "admin123") {
        if (attempts < 3) {
            cout << "Wrong password. Try again.\n";
            goto Retry;
        } else {
            cout << "Access denied. Too many attempts.\n";
            return 0;
        }
    }

    cout << "Access granted!\n";
    return 0;
}


// Jump Statement: Return statement
int Example10() {
    int a = 10;
    int b = 5;
    int sum = a + b;
    cout << "Sum is: " << sum << endl;
    
    return sum;
}



int main() {

    cout << "-----------" << endl;
    Example1();
    cout << "-----------" << endl;
    Example2();
    cout << "-----------" << endl;
    Example3();
    cout << "-----------" << endl;
    Example4();
    cout << "-----------" << endl;
    Example5();
    cout << "-----------" << endl;
    Example6();
    cout << "-----------" << endl;
    Example7();
    cout << "-----------" << endl;
    Example8();
    cout << "-----------" << endl;
    Example9();
    cout << "-----------" << endl;
    Example10();

    return 0;
}