#include <iostream>
#include "Engine.cpp"

using namespace std;

int main() {
    Engine engObj;
    engObj.printStatement();

    Engine *engPtr = &engObj;
    engPtr->printStatement();       // This is the same as (*engPtr).printStatement();

    return 0;
}