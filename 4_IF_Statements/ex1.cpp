#include <iostream>

using namespace std;

int main() {
    
    bool a1 = (5 > 3);
    bool v1 = false;
    if (a1==1) {
        v1 = true;
        cout << "5 > 3 is " << v1 << endl;
    } else {
        cout << "5 > 3 is " << v1 << endl;
    }
    

    bool a2 = (5 < 3);
    bool v2 = false;
    if (a2==1) {
        v2 = true;
        cout << "5 < 3 is " << v2 << endl;
    } else {
        cout << "5 < 3 is " << v2 << endl;
    }



    bool a3 = (5 == 3);
    bool v3 = false;
    if (a3==1) {
        v3 = true;
        cout << "5 == 3 is " << v3 << endl;
    } else {
        cout << "5 == 3 is " << v3 << endl;
    }



    bool a4 = (5 != 3);
    bool v4 = false;
    if (a4==1) {
        v4 = true;
        cout << "5 != 3 is " << v4 << endl;
    } else {
        cout << "5 != 3 is " << v4 << endl;
    }



    bool a5 = (5 >= 3);
    bool v5 = false;
    if (a5==1) {
        cout << "5 >= 3 is " << v5 << endl;
    } else {
        cout << "5 >= 3 is " << v5 << endl;
    }



    bool a6 = (5 <= 3);
    bool v6 = false;
    if (a6==1) {
        v6 = true;
        cout << "5 <= 3 is " << v6 << endl;
    } else {
        cout << "5 <= 3 is " << v6 << endl;
    }

    return 0;
}