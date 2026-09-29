#include <iostream>
using namespace std;

int main() {
    double a;
    double b;
    double c; 
    double d;
    double e;

    cout << "write down your 5 marks" << endl;
    cin >> a >> b >> c >> d >> e;

    cout << "your average is " << (a + b + c + d + e) / 5;
    return 0;
}
