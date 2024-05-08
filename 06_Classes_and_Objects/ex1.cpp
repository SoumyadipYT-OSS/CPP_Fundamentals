#include<iostream>
using namespace std;

class Tutorial_ClassesObjects {
    public:
        void coolSaying() {
            cout << "C++ is not for beginners\n" << endl;
        }
};


int main() {
    Tutorial_ClassesObjects obj1;
    obj1.coolSaying();
    return 0;
}