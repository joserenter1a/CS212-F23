#include <stdio.h>

void int_ptr_arr()
{
    // Declare your array of ints
    int numbers[] = {1,2,3,4,5};

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
    int* ptr = numbers;
    // Access array elements using the array notation
    printf("Print using array notation:\n");
    // simple for loop structure
    for(int i =0; i < 5; i++)
    {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }
        // format string with two values, pass by value

    // Access array elements using the pointer notation

    // same for loop structure
    printf("\nPrint using pointer notation\n");
    for(int i =0; i < 5; i ++)
    {
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));
    }
        // pass by reference, via the ptr
}

void str_ptr_arr()
{   
    // do the same thing, but with a str
    // hint: don't forget null terminators
    return;
}

void char_ptr_arr()
{



    return;
}

int main() {

    int_ptr_arr();
    str_ptr_arr();
    char_ptr_arr();
    
    return 0;
}
