#include <iostream>
using namespace std;
int main() {
    // \n - New line
    cout << "This is the first line.\nThis is the second line.\n";

    // \t - Horizontal tab
    cout << "Name\tAge\tCity\n";

    // \\ - Backslash
    cout << "This is a backslash: \\\n";

    // \" - Double quote
    cout << "He said, \"Welcome to C++!\"\n";

    // \' - Single quote
    cout << "It\'s a sunny day.\n";

    // \a - Alert (beep sound)
    cout << "This will try to make a beep sound: \a\n";

    // \b - Backspace
    cout << "Oops\b!\n";  // Backspaces the 's' in "Oops"

    // \r - Carriage return
    cout << "Carriage return test: Hello\rWorld\n";  // Overwrites "Hello" with "World"

    // \f - Form feed (rarely visible in modern output)
    cout << "Form feed\fNew page?\n";

    // \v - Vertical tab
    cout << "Vertical tab\vCheck spacing\n";

    return 0;
}
