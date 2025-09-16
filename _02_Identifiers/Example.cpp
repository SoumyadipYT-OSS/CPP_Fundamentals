#include<iostream>

using namespace std;

class car {
    string Brand;
    string model;
    int year;
};


// function
void getSum(int a, int b) {
    int _sum = a + b;
    cout << "The sum is: " << _sum;
}

int main() {
    int studentAge = 20;
    double accountBalance = 1000.50;
    string student_Name = "Karan";

    getSum(8, 4);

    return 0;
}