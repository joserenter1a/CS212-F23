#include <stdio.h>

void int_ptr_arr()
{
    // Declare your array of ints
    /**
     * 
     * When you declare an array like int numbers[5]; 
     * without providing an explicit initialization, 
     * the values of the array elements are not guaranteed, 
     * and they will contain what is often referred to as "garbage" values. 
     * These values are whatever happened to be stored in that memory location
     *  before you declared the array.
    */
    // Assign the address of the first element of the array to the pointer

    // Access array elements using the array notation
    // simple for loop structure
        // format string with two values, pass by value

    // Access array elements using the pointer notation
    // same for loop structure
        // pass by reference, via the ptr

    int numbers[] = {1, 2, 3, 4, 5};
    int* ptr = numbers; // Assign the address of the first element of the array to the pointer

    // Access array elements using array notation
    printf("Using array notation for int array:\n");
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    // Access array elements using pointer notation
    printf("\nUsing pointer notation for int array:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));
    }
}

void str_ptr_arr()
{   
    // do the same thing, but with a str
    // hint: don't forget null terminators
    char myString[] = "This is definitely not a string";
    char* strPtr = myString;

    // Access string characters using array notation
    printf("\nUsing array notation with a string:\n");
    for (int i = 0; myString[i] != '\0'; i++) {
        printf("myString[%d] = %c\n", i, myString[i]);
    }

    // Access string characters using pointer notation
    printf("\nUsing pointer notation with a string:\n");
    for (int i = 0; *(strPtr + i) != '\0'; i++) {
        printf("*(strPtr + %d) = %c\n", i, *(strPtr + i));
    }
    return;
}

void char_ptr_arr()
{
    // do the same thing, but with an array of strs (char *'s)
    // hint: don't forget the double ptr 
    // in case u forget ->
        // https://www.geeksforgeeks.org/c-pointer-to-pointer-double-pointer/
    char* names[] = {"Nick", "Aaron", "Lily", "Mia", "Michael"};

    // Access elements using array notation
    printf("Using array notation:\n");
    for (int i = 0; i < 5; i++) {
        printf("names[%d] = %s\n", i, names[i]);
    }

    // Access elements using pointer notation
    printf("\nUsing pointer notation:\n");
    char** ptr = names; // Assign the address of the first element of the array to the pointer
    for (int i = 0; i < 5; i++) {
        printf("*(ptr + %d) = %s\n", i, *(ptr + i));
    }


    return;
}

int main() {

    int_ptr_arr();
    str_ptr_arr();
    char_ptr_arr();
    
    return 0;
}
