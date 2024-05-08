#include<iostream>
#include<string>
using namespace std;

class TutorialClass {
    private:
        string name;

    public:
        void setName(string x) {
            name = x;
        }
        string getName() {
            return name;
        }
};


// main method
int main() {
    TutorialClass obj1;
    obj1.setName("Cpp is the best programming language\n");
    cout << obj1.getName() << endl;
    return 0;
}
