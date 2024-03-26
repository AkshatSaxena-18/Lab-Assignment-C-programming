#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_SENTENCE_LENGTH 100

int main() {
    char sentence[MAX_SENTENCE_LENGTH];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin); // Read sentence with spaces

    // Remove trailing newline character if present
    sentence[strcspn(sentence, "\n")] = '\0';

    char *word = strtok(sentence, " "); // Split sentence into words using strtok

    while (word != NULL) {
        int word_len = strlen(word);
        char last_letter = word[word_len - 1];

        // Check if last letter is lowercase or uppercase 'd'
        if (last_letter == 'd' || tolower(last_letter) == 'd') {
            printf("%s ", word);
        }

        word = strtok(NULL, " "); // Get next word
    }

    if (strlen(sentence) == 0) { // Handle empty input
        printf("No sentence entered.\n");
    } else {
        printf("\n"); // Add a newline after printing words
    }

    return 0;
}
