#include <iostream>
#include <vector>
#include "Sales_item.h"

using namespace std;

int main() {
    Sales_item item;
    vector<decltype(item.isbn())> visbn = {};
    vector<int> vcnt = {};
    while (cin >> item) {
        if (visbn.empty()) {
            visbn.push_back(item.isbn());
            vcnt.push_back(1);
            continue;
        }
        bool b = false;
        for (int i = 0; i < visbn.size(); i++) {
            if (item.isbn() == visbn[i]) {
                vcnt[i]++;
                b = true;
            }
        }
        if (!b) {
            visbn.push_back(item.isbn());
            vcnt.push_back(1);
        }
    }
    for (int i = 0; i < visbn.size(); i++) {
        cout << visbn[i] << " " << vcnt[i] << endl;
    }
    return 0;
}