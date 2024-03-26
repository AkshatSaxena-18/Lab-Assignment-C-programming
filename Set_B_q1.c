#include <stdio.h>
#include <ctype.h> 
#include<string.h>
int main() {
    char str[150];
    int vowels, consonants, digits, whitespaces;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    vowels = consonants = digits = whitespaces = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); 

        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(ch)) {
            digits++;
        } else if (isspace(ch)) {
            whitespaces++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Whitespaces: %d\n", whitespaces);

    return 0;
}
