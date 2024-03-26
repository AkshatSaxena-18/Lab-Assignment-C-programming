#include <stdio.h>
#include <ctype.h>

int iscap(const char *str) {
/*  """
  Finds the index of the first capital letter in a string, or -1 if none found.

  Args:
      str: The string to search.

  Returns:
      The index of the first capital letter, or -1 if none found.
  """ */
  for (int i = 0; str[i] != '\0'; i++) {
    if (isupper(str[i])) {
      return i;
    }
  }
  return -1;
}

int main() {
  char str[100];

  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin); // Read string with spaces

  int first_cap_index = iscap(str);

  if (first_cap_index != -1) {
    printf("First capital letter found at index: %d\n", first_cap_index);
  } else {
    printf("No capital letters found in the string.\n");
  }

  return 0;
}
