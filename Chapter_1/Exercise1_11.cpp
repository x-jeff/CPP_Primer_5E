#include <iostream>

using namespace std;

int main() {
    cout << "Please input two integers : ";
    int v1, v2;
    cin >> v1 >> v2;
    cout << "output : ";
    int v_min, v_max;
    v_min = min(v1, v2);
    v_max = max(v1, v2);
    for (int i = v_min + 1; i < v_max; i++) {
        cout << i << " ";
    }
    cout << endl;
}