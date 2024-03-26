#include <stdio.h>
#include<string.h>
#include <ctype.h>

#define MAX_SENTENCE_LENGTH 100

int main() {
    char sentence[MAX_SENTENCE_LENGTH];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin); // Read sentence with spaces

    // Remove trailing newline character if present
    sentence[strcspn(sentence, "\n")] = '\0';

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (islower(sentence[i])) {
            sentence[i] = toupper(sentence[i]); // Convert lowercase to uppercase
        }
    }

    printf("Sentence in uppercase: %s\n", sentence);

    return 0;
}
