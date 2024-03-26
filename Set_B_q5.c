#include <stdio.h>

int main() {
    char str[150]; // Character array to store the string
    int i, j; // Loop variables

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read the string from the user

    for (i = 0; str[i] != '\0'; i++) {
        // Check if the character is alphabet
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))) {
            // If not alphabet, shift remaining characters to left
            for (j = i; str[j] != '\0'; j++) {
                str[j] = str[j + 1];
            }
            // Decrement i as one character is removed
            i--;
        }
    }

    printf("String after removing non-alphabetic characters: %s\n", str);

    return 0;
}
