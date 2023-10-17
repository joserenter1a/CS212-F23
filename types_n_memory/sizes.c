#include <stdio.h>

int main() {

    // prints sizes of different data types in bytes
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of char: %lu byte\n", sizeof(char));
    printf("Size of void ptr: %lu byte\n", sizeof(void *));


    return 0;
}
