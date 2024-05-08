// Constructor another way to initialize the object in C++.

#include <iostream>
using namespace std;

class Rectangel
{
    int width, height;

public:
    Rectangel(int w, int h) {   // Constructor
        width = w;
        height = h;
    }

    int area() {
        return width * height;
    }
};


int main() {
    Rectangel obj(4, 5);
    cout << "Area: " << obj.area() << "\n" << endl;
    return 0;
}