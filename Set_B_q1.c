// Write a program to create a union for a library book with the following details (id , title , publisher
// , cost).If the code is 1 store the number of copies,if code= 2 store the issue month name and if code=3
// store the edition number.

#include <stdio.h>
#include <string.h>

union BookDetails {
    int id;
    char title[50];
    char publisher[50];
    float cost;

    // Additional members for specific information based on code
    int num_copies; // Code 1
    char issue_month[20]; // Code 2
    int edition_number; // Code 3
};

int main() {
    union BookDetails book;
    int code;

    printf("Enter book details:\n");
    printf("ID: ");
    scanf("%d", &book.id);

    printf("Book Title: ");
    scanf(" %[^\n]", book.title); // Read title with spaces

    printf("Publisher: ");
    scanf(" %[^\n]", book.publisher); // Read publisher with spaces

    printf("Cost: ");
    scanf("%f", &book.cost);

    printf("\nEnter code (1 for copies, 2 for issue month, 3 for edition): ");
    scanf("%d", &code);

    switch (code) {
        case 1:
            printf("Enter number of copies: ");
            scanf("%d", &book.num_copies);
            break;
        case 2:
            printf("Enter issue month: ");
            scanf(" %[^\n]", book.issue_month); // Read month with spaces
            break;
        case 3:
            printf("Enter edition number: ");
            scanf("%d", &book.edition_number);
            break;
        default:
            printf("Invalid code.\n");
    }

    printf("\nBook Information:\n");
    printf("ID: %d\n", book.id);
    printf("Title: %s\n", book.title);
    printf("Publisher: %s\n", book.publisher);
    printf("Cost: %.2f\n", book.cost);

    switch (code) {
        case 1:
            printf("Number of copies: %d\n", book.num_copies);
            break;
        case 2:
            printf("Issue month: %s\n", book.issue_month);
            break;
        case 3:
            printf("Edition number: %d\n", book.edition_number);
            break;
    }

    return 0;
}
