#include <iostream>
#include <fstream>
using namespace std;

int getWhatTheyWant();
void displayItems(int x);

int main() {
    int whatTheyWant;

    do {
        whatTheyWant = getWhatTheyWant();

        switch (whatTheyWant) {
        case 1:
            displayItems(1);
            break;
        case 2:
            displayItems(2);
            break;
        case 3:
            displayItems(3);
            break;
        case 4:
            cout << "Quitting program" << endl;
            break;
        default:
            cout << "Invalid choice. Please select 1, 2, 3, or 4." << endl;
        }
    } while (whatTheyWant != 4);

    return 0;
}

// getWhatTheyWant() function
int getWhatTheyWant() {
    int choice;

    cout << "1 - just plain items" << endl;
    cout << "2 - helpful items" << endl;
    cout << "3 - harmful items" << endl;
    cout << "4 - quit program" << endl;
    cin >> choice;

    return choice;
}

// displayItems() function
void displayItems(int x) {
    ifstream objectFile("objects.txt");
    string name;
    double power;

    while (objectFile >> name >> power) {
        switch (x) {
        case 1:
            if (power == 0) {
                cout << name << ' ' << power << endl;
            }
            break;
        case 2:
            if (power > 0) {
                cout << name << ' ' << power << endl;
            }
            break;
        case 3:
            if (power < 0) {
                cout << name << ' ' << power << endl;
            }
            break;
        default:
            break;
        }
    }
}
