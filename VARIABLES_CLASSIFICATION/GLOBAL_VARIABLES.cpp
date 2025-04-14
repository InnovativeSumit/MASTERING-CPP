// Global Variable: Declared outside all functions and accessible throughout the program.
#include <iostream>
using namespace std;
int globalVar = 10;  // Global variable
void show() {
    cout << "Global Variable: " << globalVar << endl;
}
int main() {
    show();
    return 0;
}
