#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float amount;
    float principal = 10000;
    float rate = .03;

    for (int day=1; day<=30; day++) {
        amount = principal * pow(1 + rate, day);
        cout << day << "-----" << amount << endl;
    }
}