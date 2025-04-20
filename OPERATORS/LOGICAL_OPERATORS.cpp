#include <iostream>
using namespace std;

int main() {
int x = 10, y = 5, z = 15;

// AND operator
cout << "AND Operator:" << endl;
if (x > 5 && y < 10) {
cout << "Both conditions are True" << endl;  // True
}

// OR operator
cout << "\nOR Operator:" << endl;
if (x < 5 || z > 10) {
cout << "At least one condition is True" << endl;  // True
}

// NOT operator
cout << "\nNOT Operator:" << endl;
bool is_logged_in = false;
if (!is_logged_in) {
cout << "User is not logged in" << endl;  // True
}

// Combined logic
cout << "\nCombined Logic:" << endl;
int age = 20;
bool has_ticket = true;

if (age >= 18 && has_ticket) {
cout << "You can enter the concert!" << endl;  // True
}
else
{
cout << "Entry not allowed." << endl;
}

return 0;
}


