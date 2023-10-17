#include <stdio.h>
#include <stdbool.h>
// include header files, need stdbool for boolean expressions

int main() {
    // initialize counter variables as ints and set to zero
    int charCount = 0;
    int wordCount = 0;
    int lineCount = 0;
    int byteCount = 0; // Initialize byteCount
    int c;

    // init bool to check for word
    bool inWord = false;
    // initialize a pointer to byteCount that gets updated with charCount

    int *byteCountPtr = &byteCount; 

    // getchar() gets a character from stdin until it reaches an EOF delimiter
    while ((c = getchar()) != EOF) {
        // update charCount while you're sitll in the file
        charCount++;

        *byteCountPtr = charCount; // Update byteCount via the pointer

        // if you run into a newline, update line count
        if (c == '\n') {
            lineCount++;
        }


        // Check for word boundaries
        // blank space, tab, or newline marks the start of a new word
        if (c == ' ' || c == '\t' || c == '\n') {
            // now in a new word
            inWord = false;
        } else if (!inWord) {
            // you are still reading a word so update the word count until you
            // reach a boundary again
            inWord = true;
            wordCount++;
        }
    }

    // formatted printing of our values
    printf("Lines: %d\n", lineCount);
    printf("Words: %d\n", wordCount);
    printf("Characters: %d\n", charCount);
    printf("Bytes: %d\n", byteCount);

    return 0;
}
