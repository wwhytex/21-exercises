#include <iostream>
using namespace std;

int main() {
	int number;
	
	cout << "What is the number that you want to know whether is positive, negative or zero?" << endl;
	cin >> number;


	if (number > 0) {
		cout << "The number is positve" << endl;
	}
	else if (number < 0) {
		cout << "The number is negative" << endl;
	}
	else {
		cout << "The number is zero" << endl;
	}
	return 0;
}
