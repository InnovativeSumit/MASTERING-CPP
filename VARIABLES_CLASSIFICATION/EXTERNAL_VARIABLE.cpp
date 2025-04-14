// External Variable: Defined in another file and accessed using the 'extern' keyword.
#include <iostream>
using namespace std;
extern int externalVar=6;  // Declaration of external variable
void showExternal() {
    cout << "External Variable: " << externalVar << endl;
}
int main() {
    showExternal();
    return 0;
}
