#include <stdio.h>
#include <stdlib.h>

/*
We want to write a function called resizeArray
The function signature is resizeArray(void **array, size_t capacity, size_t, newSize)

Usage: ./dynamic_array < in.txt
OR ./dynamic_array 1 2 3 4 5 6 7 E (or some other non integer)

things to note here
    -   size_t is an unsigned int type that is used to represent the size of 
        objects, in bytes. It is guaranteed to be able to represent the size 
        of the largest object that can exist in the program.
        The result of the sizeof operator is of type size_t. This makes sense 
        because the operator returns the size of an object in bytes
*/
void resizeArray(void **array, size_t *capacity, size_t newSize) {
    /* 
     dynamically resize an array of ints pointed to by the variable array
     first dereferencing the pointer 'array' to get the current block it points to
     Resizes the memory block. 
     
     Things to note for your implementation:
        - If the resizing requires moving to a new location, it 
          should return a pointer to the new block. If resizing in place,
          it might return the same pointer 
          What would this need to use? malloc, calloc, or realloc?
    */

    /* INSERT */

    // How would you check if your Memory allocation failed?
    if (/* INSERT */) {
        fprintf(stderr, "Memory reallocation failed\n");
        exit(EXIT_FAILURE);
    }

    // update the capacity to reflect the new size of the array
    /* INSERT */
}

int main() {
    // capacity of 5 with currently no elements inside
    size_t capacity = 5;
    size_t size = 0;
    // allocate memory for capacity number of integers
    // explicitly cast the generic pointer returned by malloc to a pointer to int. 
    // This indicates that the memory block is intended to store integers
    int * dynamicArray = /* INSERT */;

    // How would you check if your malloc failed?
    if (/* INSERT */) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    printf("Enter integers (non-integer to stop):\n");

    // Run forever
    while (1) {
        // declare a value variable to store the current inputted integer
        int value;
        // check the return value of scanf to ensure user inputted a single int
        if (/* INSERT */) {
            // if we've reached capacity
            if (size == capacity) {
                /*
                When the array reaches its current capacity, instead of immediately 
                resizing to exactly the required size, you double the capacity. 
                This overallocation helps to reduce the frequency of resizing operations.
                This is because as the array grows, you have more "room" before reaching the next doubling point
                */
                /* INSERT */
            }

            // Insert the user-entered value into the dynamic array
            // Think about where the pointer is for the last current element, 
            // and where you need to insert it
            /* INSERT */
        } else {
            break; // Exit loop if a non-integer value is entered
        }
    }

    // This will simply print the Final Array that is inputted by the user
    printf("\nFinal Array:\n");

    // How do you know when to terminate the loop?
    // Why is it at size and not the capacity?
    for (size_t i = 0; i < size; i++) {
        printf("%d ", dynamicArray[i]);
    }

    // %zu is format specifier for type size_t
    printf("\nArray Size: %zu\n", size);

    // Don't forget to free dynamically allocated memory
    /* INSERT */

    // Run this in valgrind to check for memory leaks
    // What is a memory leak? Why bad?
    // valgrind --leak-check=full ./dynamic_array.c


    return 0;
}
