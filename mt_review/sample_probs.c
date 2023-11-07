/*
1. Write the implementation for a function that matches the following signature and semantics; be
sure to include any required header files in your implementation.

 fcopy() – copy the contents of `in’ to `out’ a line at a time

 `in’ and `out’ are open file streams

void fcopy(FILE *in, FILE *out);
*/
#include <stdio.h>
void fcopy(FILE *in, FILE *out)
{
    char buf[BUFSIZ];
    while(fgets(buf, sizeof buf, in) != NULL)
        fputs(buf, out);

        //fprintf(out, "%s", buf)
}

// 2. Write the implementation for a function that matches the following signature and semantics; be
// sure to include any required header files in your implementation.
/*
* printStrings() – print an array of C strings, 
                    with each string on its own line
*
* `array’ is an array of C strings; a NULL sentinel in the array
* indicates that the end of the list has been reached
* `fp’ is an open file stream upon which the line should be printed

void printStrings(char *array[], FILE *fp);
*/
void printStrings(char *array[], FILE *fp) {
    int i;
    for (i = 0; array[i] != NULL; i++)
        fprintf(fp, "%s\n",  array[i]);
}

// 3. Write the implementation for a function that matches the following signature and semantics; be
// sure to include any required header files in your implementation.
/*
* index() – return the array index for the first occurrence of `c`
* in `s’
*
* `s’ is a C character string
* `c’ is the character to search for
*
* returns:
* index of the first occurrence of `c’ in `s’
* -1 if `c’ is not contained in `s’
*/
// int index(char s[], int c);

int first_index(char s[], char c)
{
    int i;
    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == c)
        {            
            return i;
        }

    }
    return -1;
}


int main()
{
    //test the first one, this should essentially just echo
    //fcopy(stdin, stdout);
    //char* arr[] = {"This", "is", "an", "Array", NULL};
    char s[] = "CS212";
    //printStrings(arr, stdout);
    printf("%d\n", first_index(s, '1'));
    return 0;
}