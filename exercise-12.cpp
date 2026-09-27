#include <iostream>
using namespace std;

int main() {
	double a;
	double b;
	string input;

	cout << "What's your first number?" << endl;
	cin >> a;
	cout << "What's your second number?" << endl;
	cin >> b;
	cout << "What's the mathematical operation? ( - , + , * , / ) are available." << endl;
	cin >> input;

	if (input == "-") {
		cout << a - b << endl;
	}
	else if (input == "+") {
		cout << a + b << endl;
	}
	else if (input == "*") {
		cout << a * b << endl;
	}
	else if (input == "/") {
		cout << a / b << endl;
	}
	else {
		cout << "Invalid operation" << endl;
	}
	return 0;
}
