// Friend concept in C++

/*
	Friend function is a function that is not a member 
	of a class but has access to the class's private and protected members.
*/


#include <iostream>
using namespace std;

class StankFist {
public:
	StankFist() { stinkyVar = 0; }	// Constructor
private:
	int stinkyVar;

	// friend function
	friend void stinkysFriend(StankFist& sfo);
};

void stinkysFriend(StankFist& sfo) {
	sfo.stinkyVar = 99;
	cout << sfo.stinkyVar << endl;
}


int main() {
	StankFist satyaki;
	stinkysFriend(satyaki);
}