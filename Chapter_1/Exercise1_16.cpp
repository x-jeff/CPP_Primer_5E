#include <iostream>

using namespace std;

int main() {
    double num;
    double sum = 0;
    while (cin >> num) {
        sum += num;
    }
    cout << "The sum is " << sum << endl;
}