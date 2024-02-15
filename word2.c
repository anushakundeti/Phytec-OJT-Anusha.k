#include <stdio.h>
#include <string.h>

void reverseWord(char word[], int start, int end);

int main() {
    char anu[1000];
    printf("Enter a sentence:\n");
    scanf("%[^\n]s", anu);

    int length = strlen(anu);

    int start = 0;
    for (int i = 0; i <= length; i++) {
        if (anu[i] == ' ' || anu[i] == '\0') {
            // Found the end of a word, reverse it
            reverseWord(anu, start, i - 1);
            start = i + 1; // Move to the next word
        }
    }

    printf("Reversed sentence: %s\n", anu);

    return 0;
}

void reverseWord(char word[], int start, int end) {
    while (start < end) {
        char temp = word[start];
        word[start] = word[end];
        word[end] = temp;
        start++;
        end--;
    }
}

