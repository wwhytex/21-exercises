#include <iostream>
using namespace std;

int main() {
	int temperature;

	cout << "Choose a temperature" << endl;
	cin >> temperature;

	if (temperature < 10) {
		cout << "Very cold";
	}
	else if (temperature > 10 && temperature <= 25) {
		cout << "Pleasant";
	}
	else if (temperature > 25) {
		cout << "Hot";
	}
	return 0;
}
