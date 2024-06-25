#include <iostream>
#include "Sally.h"
using namespace std;

int main() {
    Sally salObj;
    salObj.printShiz();

    const Sally constObj;
    constObj.printShiz2();
}