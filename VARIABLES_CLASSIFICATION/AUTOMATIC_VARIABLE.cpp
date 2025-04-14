// Automatic Variable: Local variable with automatic storage duration (default in C++).
// Note: 'auto' keyword in C++11+ is for type inference, not storage class.
#include <iostream>
using namespace std;
void autoExample() {
    int autoVar = 15;  // Automatic variable (default)
    cout << "Automatic Variable: " << autoVar << endl;
}
int main() {
    autoExample();
    return 0;
}
