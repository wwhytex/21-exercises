#include <iostream>
using namespace std;

int main() {
	double a;
	double b;
	double c;
	double bigger;

	cout << "Right 3 numbers down" << endl;
	cin >> a >> b >> c;

	bigger = a;
	if (b > bigger) bigger = b;
	if (c > bigger) bigger = c;

	cout << "The biggest number is " << bigger << endl;
	return 0;
}
