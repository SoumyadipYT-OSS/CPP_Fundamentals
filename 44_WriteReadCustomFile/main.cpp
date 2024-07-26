#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int customFileRead() {
	ifstream theFile("players.txt");

	int id;
	string name;
	double money;
	while (theFile >> id >> name >> money) {
		cout << id << ", " << name << ", " << money << endl;
	}

	return 0;
}


int main() {
	customFileRead();

	return 0;
}
