#include <stdio.h>

/**
 * hare - Prints a string before the
 *   main function is executed.
 */

void __attribute__((constructor)) premain() {
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

int main(void) {
    // Your main function code here
    return 0;
}
