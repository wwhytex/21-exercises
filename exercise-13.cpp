#include <iostream>
using namespace std;

int main() {
	double price;

	cout << "What's the price of the product?" << endl;
	cin >> price;

	if (price >= 100) {
		double discount = price * 0.10;
		double showfinalprice = price - discount;
		cout << "The final price is: " << showfinalprice << endl;
	}
	else {
		cout << "This price doesn't have a discount";
	}
	return 0;
}
