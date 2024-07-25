#include <iostream>

// Template function for addition
template <typename T>
T add(T a, T b) {
    return a + b;
}

// Template function for subtraction
template <typename T>
T subtract(T a, T b) {
    return a - b;
}

// Template function for multiplication
template <typename M>
M multiply(M a, M b) {
    return a * b;
}

// Template function for division
template <typename D>
D divide(D a, D b) {
    if (b == 0) {
        std::cout << "Error: Division by zero" << std::endl;
        return 0;
    }
    return a / b;
}

int main() {
    int x = 10, y = 5;
    std::cout << "Addition of " << x << " and " << y << " = " << add(x, y) << std::endl;
    std::cout << "Subtraction of " << x << " and " << y << " = " << subtract(x, y) << std::endl;
    std::cout << "Multiplication of " << x << " and " << y << " = " << multiply(x, y) << std::endl;
    std::cout << "Division of " << x << " and " << y << " = " << divide(x, y) << std::endl;

    double p = 3.14, q = 2.71;
    std::cout << "Addition of " << p << " and " << q << " = " << add(p, q) << std::endl;
    std::cout << "Subtraction of " << p << " and " << q << " = " << subtract(p, q) << std::endl;
    std::cout << "Multiplication of " << p << " and " << q << " = " << multiply(p, q) << std::endl;
    std::cout << "Division of " << p << " and " << q << " = " << divide(p, q) << std::endl;

    std::cout << "Division of " << x << " and 0 = " << divide(x, 0) << std::endl;

    return 0;
}
