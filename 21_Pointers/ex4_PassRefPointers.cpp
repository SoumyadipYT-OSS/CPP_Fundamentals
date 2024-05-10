#include <iostream>

using namespace std;

void passByValue(int x);
void passByReference(int *x);

int main() {
    int Prafullachandra = 13;
    int Satyendranath = 13;

    passByValue(Prafullachandra);
    passByReference(&Satyendranath);

    cout << "Prafullachandra is now " << Prafullachandra << endl;
    cout << "Satyendranath is now " << Satyendranath << endl;
}

void passByValue(int x) {
    x = 99;
}

void passByReference(int *x) {
    *x = 66;
}