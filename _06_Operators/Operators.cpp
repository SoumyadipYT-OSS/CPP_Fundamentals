#include <iostream>

using namespace std;


int ArithmeticOperators() {
    int a = 8, b = 3;

    // Addition
    cout << "a + b = " << (a + b) << endl;

    // Substraction
    cout << "a - b = " << (a - b) << endl;

    // Multiplication
    cout << "a * b = " << (a * b) << endl;

    // Division
    cout << "a / b = " << (a / b) << endl;

    // Modulo
    cout << "a % b = " << (a % b) << endl;

    // Increment
    cout << "++a = " << ++a << endl;

    // Decrement
    cout << "b-- = " << b-- << endl;

    return 0;
}


int RelationalOperators() {
    int a = 6, b = 4;

    // Equal operator
    cout << "a == b is " << (a == b) << endl;
  
    // Greater than operator
    cout << "a > b is " << (a > b) << endl;
  
    // Greater than Equal to operator
    cout << "a >= b is " << (a >= b) << endl;
  
    //  Lesser than operator
    cout << "a < b is " << (a < b) << endl;
  
    // Lesser than Equal to operator
    cout << "a <= b is " << (a <= b) << endl;
  
    // Not equal to operator
    cout << "a != b is " << (a != b);

    return 0;
}


int LogicalOperators() {
    int a = 6, b = 4;

    // Logical AND operator
    cout << "a && b is " << (a && b) << endl;
  
    // Logical OR operator
    cout << "a || b is " << (a || b) << endl;
  
    // Logical NOT operator
    cout << "!b is " << (!b);

    return 0;
}


int BitwiseOperators() {
    int a = 6, b = 4;

    // Binary AND operator
    cout << "a & b is " << (a & b) << endl;

    // Binary OR operator
    cout << "a | b is " << (a | b) << endl;

    // Binary XOR operator
    cout << "a ^ b is " << (a ^ b) << endl;

    // Left Shift operator
    cout << "a << 1 is " << (a << 1) << endl;

    // Right Shift operator
    cout << "a >> 1 is " << (a >> 1) << endl;

    // One’s Complement operator
    cout << "~(a) is " << ~(a);

    return 0;
}


int AssignmentOperators() {
    int a = 6, b = 4;

    // Assignment Operator.
    cout << "a = " << a << endl;
  
    //  Add and Assignment Operator.
    cout << "a += b is " << (a += b) << endl;
  
    // Subtract and Assignment Operator.
    cout << "a -= b is " << (a -= b) << endl;
  
    //  Multiply and Assignment Operator.
    cout << "a *= b is " << (a *= b) << endl;
  
    //  Divide and Assignment Operator.
    cout << "a /= b is " << (a /= b);

    return 0;
}


int TernaryOperators() {
    int a = 3, b = 4;

    // Conditional Operator
    int result = (a < b) ? b : a;
    cout << "The greatest number "
          "is " << result;

    return 0;
}


// main driver code
int main() {
    cout << "Arithmetic Operators" << endl;
    ArithmeticOperators();
    cout << "Relational Operators" << endl;
    RelationalOperators();
    cout << "Logical Operators" << endl;
    LogicalOperators();
    cout << "Bitwise Operators" << endl;
    BitwiseOperators();
    cout << "Assignment Operators" << endl;
    AssignmentOperators();
    cout << "Ternary Operators" << endl;
    TernaryOperators();

    return 0;
}