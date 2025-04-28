#include <iostream>
using namespace std;
int main() {
int a, b, c, greatest;
    cout << "Enter 1st numbers: ";
    cin >> a ;
    cout << "Enter 2nd numbers: ";
    cin >> b ;
    cout << "Enter 13rd numbers: ";
    cin >> c ;
    // Using nested ternary operators to find the greatest number
    greatest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    cout << "The greatest number is: " << greatest << endl;
    return 0;
}
