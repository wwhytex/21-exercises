#include <iostream>
#include <random>

using namespace std;

int GetRandom(int min, int max) {
    random_device seed;
    mt19937 gen(seed());
    uniform_int_distribution<int> dist(min, max);
    return dist(gen);
}

int main() {
    int numberchoosed;
    auto randomnumber = GetRandom(1, 100);

    cout << "choose a number between 1 and 100" << endl;

    while (true) {
        cin >> numberchoosed;

        if (randomnumber == numberchoosed) {
            cout << "thats the right number!" << endl;
        }
        else if (randomnumber < numberchoosed) {
            cout << "the number is lower" << endl;
        }
        else if (randomnumber > numberchoosed) {
            cout << "the number is higher" << endl;
        }
        else {
            cout << "this number is not valid" << endl;
        }
    }
}
