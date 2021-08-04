#include <iostream>

using namespace std;

int main() {
    //先输出2M，然后转到新一行
    cout << "\062\x4d\012" << endl;
    //先输出2，然后输出制表符，再输出M，最后转到新一行
    cout << "\062\011\x4d\012" << endl;
}