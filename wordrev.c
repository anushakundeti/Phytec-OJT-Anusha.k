#include <stdio.h>
#include <string.h>

void reverseWord(char word[]) {
    int length = strlen(word);

    for (int i = 0; i < length / 2; i++) {
        char temp = word[i];
        word[i] = word[length - i - 1];
        word[length - i - 1] = temp;
    }
}

void reverseEachWord(char sentence[]) {
    char *token = strtok(sentence, " "); 

    while (token != NULL) {
        reverseWord(token); 
        printf("%s ", token);
        token = strtok(NULL, " ");
    }
}

int main() {
    char sentence[1000];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    reverseEachWord(sentence);

    return 0;
}

