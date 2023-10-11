// include header files, need to do input/output and stdbool for boolean expressions

int main() {
    // initialize counter variables for chars, words, lines, bytes, and a current char counter as ints and set to zero

    // init bool to check if currently in a word
    // initialize a byteCount pointer that gets initialized to the address of byteCount

    //  getchar() gets a character and runs from stdin until it reaches an EOF delimiter
        // increment charCount while you're still in the file

        // Update byteCount to charCount via the pointer

        // if your current char runs into a newline, increment line count

        // Check for word boundaries with compound if statement
        // blank space, tab, or newline marks the start of a new word
            // if true you know you are in a new word
            // so you're inWord would turn false as you start a new one
        // else if you are already inWord
            // you are still reading a word so update the word count until you
            // reach a boundary again
            // so inWord would be true
            // increment wordCount

    // formatted printing of our values, Lines, words, chars, bytes
    // return 0
}
