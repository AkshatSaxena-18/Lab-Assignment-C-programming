#include <stdio.h>
#include <string.h>

int main() {
   char word[50], string[100];

   printf("Enter a word to remove: ");
   fgets(word, sizeof(word), stdin);
   word[strcspn(word, "\n")] = '\0';  // Remove trailing newline

   printf("Enter a string: ");
   fgets(string, sizeof(string), stdin);
   string[strcspn(string, "\n")] = '\0';  // Remove trailing newline

   char *pos = strstr(string, word); // Find first occurrence of word

   if (pos != NULL) {
       // Shift characters to overwrite the word
       int word_len = strlen(word);
       memmove(pos, pos + word_len, strlen(pos + word_len) + 1);

       printf("Modified string: %s\n", string);
   } else {
       printf("Word '%s' not found in the string.\n", word);
   }

   return 0;
}
