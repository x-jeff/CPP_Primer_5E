#include <iostream>

using namespace std;

int main() {
    //use "for" loop in ex1.9
    int sum = 0;
    for (int i = 50; i <= 100; i++) {
        sum += i;
    }
    cout << "50~100 sum = " << sum << endl;

    //use "for" loop in ex1.10
    for (int i = 10; i >= 0; i--) {
        cout << i << " ";
    }
    cout << endl;

    //use "for" loop in ex1.11
    cout << "Please enter two integers : ";
    int n1, n2;
    cin >> n1 >> n2;
    cout << "The integers between " << n1 << " and " << n2 << " : ";
    for (int i = min(n1, n2); i <= max(n1, n2); i++) {
        cout << i << " ";
    }
    cout << endl;
}