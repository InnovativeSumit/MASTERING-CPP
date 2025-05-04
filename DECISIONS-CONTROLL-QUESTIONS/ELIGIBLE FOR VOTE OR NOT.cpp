#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(age >= 18) {
        cout << "Congratulations! You are eligible to vote." << endl;
    }
    else {
        cout << "Sorry, you are not eligible to vote yet." << endl;
        cout << "You need to wait " << (18 - age) << " more years to vote." << endl;
    }

    return 0;
}
