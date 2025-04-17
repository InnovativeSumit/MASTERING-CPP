#include <iostream>
using namespace std;
int main() {
int a = 10, b = 20;
// Equal to (==)
cout<<a<<" == "<<b<<" is "<<(a == b)<< endl; // 0 (false)
// Not equal to (!=)
cout<<a<<" != "<<b<<" is "<<(a != b)<< endl;  // 1 (true)

// Greater than (>)
cout<<a<<" > "<<b<<" is "<<(a > b)<< endl;    // 0 (false)

// Less than (<)
cout<<a<<" < "<<b<<" is "<<(a < b)<< endl;    // 1 (true)

// Greater than or equal to (>=)
cout<<a<<" >= "<<b<<" is "<<(a >= b)<< endl;  // 0 (false)

// Less than or equal to (<=)
cout<<a<<" <= "<<b<<" is "<<(a <= b)<< endl;  // 1 (true)

return 0;
}
