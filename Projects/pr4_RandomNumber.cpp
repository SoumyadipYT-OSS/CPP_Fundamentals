#include <iostream>
#include <cstdlib>  // Required for rand() and srand()
using namespace std;

int main() {
    srand(10);  // Seed the random number generator with 1
    cout << "Here is a random number: " << rand() << endl;
}