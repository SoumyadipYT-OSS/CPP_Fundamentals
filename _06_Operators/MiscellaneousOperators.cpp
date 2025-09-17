#include <iostream>

using namespace std;

int Example1()
{
    int a = 10;
    char b = 'Z';
    double pi = 3.14;

    cout << "Size of int: " << sizeof(a) << " bytes" << endl;
    cout << "Size of char: " << sizeof(b) << " bytes" << endl;
    cout << "Size of double: " << sizeof(pi) << " bytes" << endl;

    return 0;
}

int Example2()
{
    int a = 5, b = 10;
    int result = (a++, b + 20); // a++ হয়, discard হয়; b+20 হয়, return হয়

    cout << "Result: " << result << endl; // Output: 30

    // Using Loop
    for (int i = 0, j = 5; i < 5; i++, j--)
    {
        cout << "i: " << i << ", j: " << j << endl;
    }

    return 0;
}

int Example3()
{
    int value = 42;
    int *ptr = &value; // Address-of operator

    cout << "Value: " << value << endl;
    cout << "Address of value: " << &value << endl;
    cout << "Pointer holds: " << ptr << endl;
    cout << "Dereferenced pointer: " << *ptr << endl;

    return 0;
}

int Example4()
{
    class Car
    {
    public:
        string brand;
        void honk()
        {
            cout << "Honk! Honk!" << endl;
        }
    };

    Car myCar;
    myCar.brand = "BMW";
    myCar.honk();

    return 0;
}

int Example5()
{
    class Device
    {
    public:
        string name;
        void ping()
        {
            cout << name << " is active!" << endl;
        }
    };

    Device *d = new Device;
    d->name = "Samsung";
    d->ping();
    delete d;

    return 0;
}

int Example6()
{
    class Base
    {
    public:
        virtual void show() { cout << "Base class\n"
                                   << endl; }
    };

    class Derived : public Base
    {
    public:
        void show() override { cout << "Derived class\n"
                                    << endl; }
    };

    // 1. static_cast: float → int
    float pi = 3.1416;
    int rounded = static_cast<int>(pi);
    cout << "Static cast (float -> int): " << rounded << endl;

    // 2. dynamic_cast: Base* → Derived
    Base *basePtr = new Derived;
    Derived *derivedPtr = dynamic_cast<Derived *>(basePtr);
    if (derivedPtr)
    {
        derivedPtr->show(); // Output: Derived class
    }

    // 3. const_cast: remove constness
    int val = 42;
    const int *constPtr = &val;
    int *modifiablePtr = const_cast<int *>(constPtr);
    *modifiablePtr = 99;
    cout << "Const cast: " << *modifiablePtr << endl;

    // 4. reinterpret_cast: int* → char*
    int number = 512;
    char *byteView = reinterpret_cast<char *>(&number);
    cout << "Reinterpret cast (int -> char): " << static_cast<int>(byteView[0]) << endl;

    delete basePtr;

    return 0;
}

int main()
{
    /**
     * @brief Demonstrates the use of sizeof operator to determine memory size of basic data types.
     *
     * This function prints the size (in bytes) of an int, char, and double variable.
     * It helps understand how different types occupy memory in C++.
     *
     * @return int Always returns 0.
     */
    cout << "\033[1;36m\n Example1: Demonstrating the sizeof operator to check memory size of different data types\033[0m\n";
    Example1();

    /**
     * @brief Demonstrates the comma operator and its behavior in expressions and loops.
     *
     * This function shows how the comma operator evaluates multiple expressions,
     * and uses it inside a for loop to update two variables simultaneously.
     *
     * @return int Always returns 0.
     */
    cout << "\033[1;33m\n Example2: Using the comma operator and a loop with multiple variable updates\033[0m\n";
    Example2();

    /**
     * @brief Demonstrates the address-of operator (&) and pointer usage.
     *
     * This function creates a pointer to an integer variable, prints its value,
     * memory address, and dereferenced value to show how pointers work.
     *
     * @return int Always returns 0.
     */
    cout << "\033[1;32m\n Example3: Using the address-of operator (&) to create a pointer and access memory\033[0m\n";
    Example3();

    /**
     * @brief Demonstrates the dot operator (.) for accessing class members.
     *
     * This function defines a Car class, creates an object, assigns a value to a member,
     * and calls a member function using the dot operator.
     *
     * @return int Always returns 0.
     */
    cout << "\033[1;34m\n Example4: Accessing class members using the dot operator (.)\033[0m\n";
    Example4();

    /**
     * @brief Demonstrates the arrow operator (->) for accessing members via object pointers.
     *
     * This function defines a Device class, creates a dynamic object using new,
     * accesses its members using the arrow operator, and deletes the object.
     *
     * @return int Always returns 0.
     */
    cout << "\033[1;35m\n Example5: Accessing class members via pointer using the arrow operator (->)\033[0m\n";
    Example5();

    /**
     * @brief Demonstrates all four C++ casting operators: static_cast, dynamic_cast, const_cast, and reinterpret_cast.
     *
     * This function performs:
     * - static_cast: Converts float to int.
     * - dynamic_cast: Safely casts a base class pointer to a derived class pointer.
     * - const_cast: Removes constness from a pointer (used safely here).
     * - reinterpret_cast: Reinterprets an int pointer as a char pointer to view raw bytes.
     *
     * @return int Always returns 0.
     */
    cout << "\033[1;30m\n Example6: Demonstrating all four C++ casting operators—static_cast, dynamic_cast, const_cast, and reinterpret_cast (int -> char)\033[0m\n";
    Example6();

    return 0;
}