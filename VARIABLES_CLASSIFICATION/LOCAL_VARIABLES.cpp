// Automatic Variable: Declared inside a function/block; memory is automatically allocated and deallocated.
// (In C, all local variables are automatic by default.)
#include <stdio.h>
void autoExample() {
    auto  autoVar = 15;  // Automatic variable
    printf("Automatic Variable: %d\n", autoVar);
}
int main() {
    autoExample();
    return 0;
}
