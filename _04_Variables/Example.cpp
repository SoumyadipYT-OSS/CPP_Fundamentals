#include <iostream>
using namespace std;

int Example1() {
    int num = 3;
    cout << num << endl;

    // updating the value of the variable
    num = 7;
    cout << num << endl;

    return 0;
}

int Example2() {
    int num1 = 10, num2;

    // Assigning num1's value to num2
    num2 = num1;
    cout << num1 << " " << num2 << endl;
    return 0;
}

int Example3() {
    cout << "Addition method" << endl;
    cout << 10 + 20 << endl;
    return 0;
}


/* Constant Variable */
int Example4() {
    const int num = 10;
    cout << num;
    return 0;
}

// ====================
/* Scope of Variables */
// ====================

/*
    Global Scope (সার্বজনীন ভেরিয়েবল):
    এই ভেরিয়েবলগুলো function-এর বাইরে declare করা হয়, এবং পুরো প্রোগ্রামে ব্যবহার করা যায়
*/
int globalCount = 0;

void Increment() {
    globalCount++;
    cout << "Global Count: " << globalCount << endl;
}

/*
    Local Scope:
    Function-এর ভিতরে declare করা ভেরিয়েবল, শুধু সেই function-এর ভিতরেই কাজ করে
*/
void showMessage() {
    string msg = "This will show here only because of local variable";   // local variable
    cout << msg << endl;
}

/*
    Block Scope:
    Loop বা condition-এর {} এর ভিতরে declare করা ভেরিয়েবল, শুধু সেই ব্লকের ভিতরেই কাজ করে
*/
int blockScopeVar() {
    cout << "Block Scope Variable" << endl;
    int x = 10;
    if (x > 5) {
        int y = x * 2;
        cout << "y = " << y << endl;
    }

    return 0;
}

/*
    Function Parameter Scope (ফাংশনের ইনপুট ভেরিয়েবল):
    Function-এর parameter হিসেবে declare করা ভেরিয়েবল, শুধু সেই function-এর ভিতরে কাজ করে
*/
void greet(string name) {
    cout << "Namaste, " << name << "!" << endl;
}

int main() {
    Example1();
    Example2();
    Example3();
    Example4();
    Increment();
    Increment();
    showMessage();
    blockScopeVar();
    greet("Mr. Developer");
    
    return 0;
}