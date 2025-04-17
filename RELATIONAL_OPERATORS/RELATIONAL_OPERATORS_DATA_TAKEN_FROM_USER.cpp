#include <iostream>
using namespace std;
int main() {
int a,b;
cout<<"Enter the 1st Number: ";
cin>>a;
cout<<"Enter the 2nd Number: ";
cin>>b;
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
