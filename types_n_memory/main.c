#include <stdio.h>
#include <stdbool.h>

int main() {
    int charCount = 0;
    int wordCount = 0;
    int lineCount = 0;
    int byteCount = 0; // Initialize byteCount
    bool inWord = false;
    int c;
    int *byteCountPtr = &byteCount; // Create a pointer to byteCount

    while ((c = getchar()) != EOF) {
        charCount++;

        *byteCountPtr = charCount; // Update byteCount via the pointer

        if (c == '\n') {
            lineCount++;
        }


        // Check for word boundaries
        if (c == ' ' || c == '\t' || c == '\n') {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            wordCount++;
        }
    }

    printf("Lines: %d\n", lineCount);
    printf("Words: %d\n", wordCount);
    printf("Characters: %d\n", charCount);
    printf("Bytes: %d\n", byteCount);

    return 0;
}
