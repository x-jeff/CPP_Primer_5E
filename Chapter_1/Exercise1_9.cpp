#include <iostream>

using namespace std;

int main() {
    int v = 50, sum = 0;
    while (v < 101) {
        sum += v;
        v++;
    }
    cout << "The sum is : " << sum << endl;
}