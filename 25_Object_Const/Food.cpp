#include <iostream>
#include "Food.h"
using namespace std;


const char* RecommendMeAFood(char firstLetter) {
	if (firstLetter == 'a') {
		return "aloo tikka";
	}
	else if (firstLetter == 'b') {
		return "butter";
	}
	else if (firstLetter == 'c') {
		return "chole bhature";
	}
	else if (firstLetter == 'p') {
		return "paneer tikka";
	}
	else {
		return "No food found";
	}
}


void Food::GetPaneerTikkaRecepie() {
	cout << "Paneer Tikka Recepie: " << endl;
	cout << "Ingredients: " << endl;
	cout << "Paneer, Curd, Spices, Salt, Lemon, Onion, Capsicum" << endl;
	cout << "Method: " << endl;
	cout << "1. Cut Paneer, Onion, Capsicum in cubes" << endl;
	cout << "2. Mix Curd, Spices, Salt, Lemon in a bowl" << endl;
	cout << "3. Add Paneer, Onion, Capsicum in the bowl" << endl;
	cout << "4. Mix well and keep it in refrigerator for 1 hour" << endl;
	cout << "5. Put them on skewers and grill them" << endl;
	cout << "6. Serve hot with green chutney" << endl;
}