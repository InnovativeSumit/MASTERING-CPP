#include <iostream>
using namespace std;
int main() {
    int a, b, c;

    cout << "Enter 1st numbers: ";
    cin >> a ;
    cout << "Enter 2nd numbers: ";
    cin >> b ;
    cout << "Enter 3rd numbers: ";
    cin >> c ;


    if (a >= b && a >= c) {
        cout << a << " is the greatest number." << endl;
    }
    else if (b >= a && b >= c) {
        cout << b << " is the greatest number." << endl;
    }
    else {
        cout << c << " is the greatest number." << endl;
    }

    return 0;
}
