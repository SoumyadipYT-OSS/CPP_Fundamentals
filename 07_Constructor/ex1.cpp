// Constructor in C++

#include <iostream>
using namespace std;

class Rectangel
{
    int width, height;

public:
    Rectangel() {   // Constructor
        cout << "Constructor is called\n" << endl;
    }
};

int main() {
    Rectangel obj;
    return 0;
}
