#include <iostream>
using namespace std;

int main() {
    double a;
    double b;
    double c;
    
    cout << "Know your average" << endl;
    cout << "What's the first mark " << endl;
    cin >> a;
    cout << "What's the second mark " << endl;
    cin >> b;
    cout << "What's the third mark " << endl;
    cin >> c;
    cout << "That's your average: " << ( a + b + c ) / 3 << endl;
    return 0;
}
