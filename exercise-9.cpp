#include <iostream>
using namespace std;

int main() {
	int a;
	int b;

	cout << "Choose 2 number and it will say which one is bigger" << endl;
	cout << "First number"; << endl;
	cin >> a;
	cout << "Second number"; << endl;
	cin >> b;

	if (a > b) {
		cout << "The first number is bigger than the second number" << endl;
	}
	else {
		cout << "The second number is bigger than the first number" << endl;
	}
	return 0;
}
