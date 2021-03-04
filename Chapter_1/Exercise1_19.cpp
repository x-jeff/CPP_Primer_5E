#include <iostream>

using namespace std;

int main() {
    int val1 = 0, val2 = 0;
    cin >> val1 >> val2;
    int start = 0, end = 0;
    if (val1 < val2) {
        start = val1;
        end = val2;
    } else {
        start = val2;
        end = val1;
    }
    for (int i = start; i <= end; i++) {
        cout << i << " ";
    }
    cout << endl;
}