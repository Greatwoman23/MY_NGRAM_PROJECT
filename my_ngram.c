#include <stdio.h>

#define ASCII_SIZE 128

void my_ngram(char *text);

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s text [text2, text3, ...]\n", argv[0]);
        return 1;
    }
    for (int i = 1; i < argc; i++) {
        my_ngram(argv[i]);
    }
    return 0;
}

void my_ngram(char *text) {
    int count[ASCII_SIZE] = {0}; // Initialize count array to all zeros
    for (int i = 0; text[i] != '\0'; i++) {
        count[(int)text[i]]++; // Increment count for each character
    }
    for (int i = 0; i < ASCII_SIZE; i++) {
        if (count[i] > 0) {
            printf("%c:%d\n", i, count[i]); // Print count in the expected format
        }
    }
}
