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
}

void str_ptr_arr()
{   
    // do the same thing, but with a str
    // hint: don't forget null terminators
    return;
}

void char_ptr_arr()
{
    // do the same thing, but with an array of strs (char *'s)
    // hint: don't forget the double ptr 
    // in case u forget ->
        // https://www.geeksforgeeks.org/c-pointer-to-pointer-double-pointer/
    return;
}

int main() {

    int_ptr_arr();
    str_ptr_arr();
    char_ptr_arr();
    
    return 0;
}
