#include <iostream>
using namespace std;

int a = 20;

class Solution {

    int a = 25;
    
    public:
        void method1() {
            cout << "Local a = " << a << endl;
            int a = 30;
            cout << "Local a = " << a << endl;
            cout << "Global a = " << ::a << endl;
        }
};


int main() {
    Solution s;
    s.method1();
    return 0;
}