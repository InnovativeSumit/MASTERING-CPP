#include <iostream>
using namespace std;

int main() {
    int a = 10; // binary: 1010
    int b = 4;  // binary: 0100

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Bitwise AND
    cout << "a & b = " << (a & b) << endl;

    // Bitwise OR
    cout << "a | b = " << (a | b) << endl;

    // Bitwise XOR
    cout << "a ^ b = " << (a ^ b) << endl;

    // Bitwise NOT
    cout << "~a = " << (~a) << endl;
    cout << "~b = " << (~b) << endl;

    // Left Shift
    cout << "a << 1 = " << (a << 1) << endl;
    cout << "b << 2 = " << (b << 2) << endl;

    // Right Shift
    cout << "a >> 1 = " << (a >> 1) << endl;
    cout << "b >> 2 = " << (b >> 2) << endl;

    return 0;
}

