#include <iostream>
using namespace std;

template <class T>
class INS_Chennai {
	T data;
	public:
		INS_Chennai(T x) {
			data = x;
		}
		T display();
};

template <class T>
T INS_Chennai<T>::display() {
	return data;
}



int main() {
	INS_Chennai<int> obj1(10);
	INS_Chennai<float> obj2(10.5);

	cout << "Integer: " << obj1.display() << endl;
	cout << "Float: " << obj2.display() << endl;

	return 0;
}
