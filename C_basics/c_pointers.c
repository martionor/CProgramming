//Simple exercise to learn pointers, the more times writing and modifying, the better basics you can learn
#include <stdio.h>

int main() {
    int num = 10;        // 1. Declare an integer variable
    int *ptr = &num;     // 2. Declare a pointer to the variable

    // 3. Modify the value of 'num' using the pointer
    // (You need to dereference the pointer to change the value)
    *ptr=15;
    // 4. Print the value of 'num' using both the variable and the pointer
    printf("Address of num (pointer): %p\n", (void*)ptr);   // Printing the pointer's address
    printf("Value of num (using variable): %d\n", num);      // Print the value of 'num'
    printf("Value of num (using pointer): %d\n", *ptr);      // Print the value of 'num' using pointer

    return 0;
}