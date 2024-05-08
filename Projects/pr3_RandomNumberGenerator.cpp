// Random Number Generator

#include <iostream>
#include <cstdlib>  // Required for rand() and srand()
#include <ctime>    // Required for time()
using namespace std;

int main() {
    // Get the system time
    unsigned seed = time(0);
    cout << "Seed: " << seed << endl;

    // Seed the random number generator
    srand(seed);    // srand() is used to seed the random number generator

    // Generate a random number
    cout << "Here is a random number: " << rand() << endl;

    return 0;
    
}
