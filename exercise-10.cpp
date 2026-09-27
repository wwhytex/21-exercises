#include <iostream>
using namespace std;

int main() {
	double mark;

	cout << "Digit your mark and see if you passed" << endl;
	cin >> mark;

	if (mark >= 10) {
		cout << "You passed" << endl;
	}
	else {
		cout << "You failed" << endl;
	}
	return 0;
}
