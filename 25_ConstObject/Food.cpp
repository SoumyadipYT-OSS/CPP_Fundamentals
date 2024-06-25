#include "Food.h"
#include <ctype.h>
#include <iostream>


const char* RecommendMeAFood(char firstLetter) {
	char firstLetterLower = tolower(firstLetter);
	switch (firstLetterLower) {
	case 'a':
		return "apple";
	case 'b':
		return "banana";
	case 'c':
		return "chocolate cake";
	case 'd':
		return "daal";
	default:
		return "rice";
	}
}

void GetVasmatiRiceRecipe() {
	std::cout << "To make vasmati rice you need...";
}