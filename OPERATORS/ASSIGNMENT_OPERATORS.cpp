// make by sumit
#include <iostream>
using namespace std;
int main() {
int a = 10;
cout << "Initial value of a: " << a << endl;

// 1. =  (Simple Assignment)
a = 5;
cout << "a = 5     --> " << a << endl;

// 2. += (Add and Assign)
a += 3; // a = a + 3
cout << "a += 3    --> " << a << endl;

// 3. -= (Subtract and Assign)
a -= 2; // a = a - 2
cout << "a -= 2    --> " << a << endl;

// 4. *= (Multiply and Assign)
a *= 4; // a = a * 4
cout << "a *= 4    --> " << a << endl;

// 5. /= (Divide and Assign)
a /= 2; // a = a / 2
cout << "a /= 2    --> " << a << endl;

// 6. %= (Modulus and Assign)
a %= 3; // a = a % 3
cout << "a %= 3    --> " << a << endl;

return 0;
}
