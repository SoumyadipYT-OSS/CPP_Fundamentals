#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int ifstream_methodExample() {
	ifstream my_File("data.txt");
	if (!my_File.is_open()) {
		cerr << "Error opening file" << endl;
		return 1;
	}

	string line;
	while (getline(my_File, line)) {
		cout << line << endl;
	}

	my_File.close();

	return 0;
}


int ofstream_methodExample() {
	ofstream my_File("data2.txt");
	if (!my_File.is_open()) {
		cerr << "Error opening file" << endl;
		return 1;
	}

	my_File << "Sample text file!" << endl;
	my_File << "This is a new line" << endl;

	my_File.close();

	return 0;
}


int fstream_methodExample() {
	fstream my_File("data3.txt", ios::out | ios::in);
	if (!my_File.is_open()) {
		cerr << "Error opening file" << endl;
		return 1;
	}

	my_File << "Sample text file!" << endl;
	my_File << "This is a new line" << endl;

	my_File.seekg(0, ios::beg);

	string line;
	while (getline(my_File, line)) {
		cout << line << endl;
	}

	my_File.close();

	return 0;
}



int main() {
	// ifstream: read from file
	// ofstream: write to file
	// fstream: read and write to file
	ifstream_methodExample();
	ofstream_methodExample();
	fstream_methodExample();

	return 0;
}
