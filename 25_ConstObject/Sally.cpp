#include "Sally.h"
#include <iostream>
using namespace std;

Sally::Sally() {
}

void Sally::printShiz() {
    cout << "I am a regular function" << endl;
}

void Sally::printShiz2() const {
    cout << "I am the constant function" << endl;
}