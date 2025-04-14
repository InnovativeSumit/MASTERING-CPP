// Static Variable: Retains its value between function calls; has local scope but static lifetime.
#include <iostream>
using namespace std;
void countCalls() {
    static int counter = 0;  // Static variable
    counter++;
    cout << "Function called " << counter << " times" << endl;
}
int main() {
    countCalls();
    countCalls();
    countCalls();
    return 0;
}

