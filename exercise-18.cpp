#include <iostream>
using namespace std;

int main() {
	int input = 0;

	while (input <= 20) {
		if (input % 2 == 0) {
			cout << input << endl;
		}
		input++;
	}
	return 0;
}
