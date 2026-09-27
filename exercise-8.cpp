#include <iostream>
using namespace std;

int main() {
	int number;

	cout << "Choose between even or odd number " << endl;
	cin >> number;

	if (number % 2 == 0) {
		cout << "It's even" << endl;
	}
	else {
		cout << "It's odd" << endl;
	}
	return 0;
}
