#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;
// Helper function to map typeid names to readable strings
template<typename T>
string type_of(const T& var) {
    if (typeid(var) == typeid(int)) return "int";
    else if (typeid(var) == typeid(float)) return "float";
    else if (typeid(var) == typeid(double)) return "double";
    else if (typeid(var) == typeid(char)) return "char";
    else if (typeid(var) == typeid(string)) return "string";
    else return "unknown";
}

int main() {
    int a;
    double b;
    char c;
    float d;

    cout<<"Enter an integer: ";
    cin>> a;
    cout<<"You entered: "<<a<<", Type: "<<type_of(a)<<"\n\n";

    cout<<"Enter a double: ";
    cin >> b;
    cout<<"You entered: "<<b<<", Type: " <<type_of(b)<<"\n\n";

    cout<<"Enter a character: ";
    cin>> c;
    cout<<"You entered: "<<c<<", Type: "<<type_of(c)<<"\n\n";

    cout<<"Enter a float: ";
    cin>> d;
    cout<<"You entered: "<<d<<", Type: "<<type_of(d)<<"\n\n";

    return 0;
}

