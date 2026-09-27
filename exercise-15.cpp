#include <iostream>
using namespace std;

int main() {
	int age;

	cout << "Type your age and get to know if you're a minor or an adult" << endl;
	cin >> age;

	if (age < 18) {
		cout << "You're a minor";
	}
	if (age > 18) {
		cout << "You're an adult";
	}
	return 0;
}
