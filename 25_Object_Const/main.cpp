#include <iostream>
#include "Food.h"
using namespace std;

int main() {
	Food foodObj;
	foodObj.GetPaneerTikkaRecepie();

	cout << RecommendMeAFood('c') << endl;
}