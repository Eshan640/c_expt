#include <stdio.h>

// Define the Book structure
struct Book {
    int book_id;
    char title[100];
    char author_name[100];
    float price;
};

// Function to print book details, takes a Book struct as argument
void printBookDetails(struct Book b) {
    printf("Book ID: %d\n", b.book_id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author_name);
    printf("Price: %.2f\n", b.price);
}

int main() {
    struct Book book1;

    // Input book details
    printf("Enter Book ID: ");
    scanf("%d", &book1.book_id);
    printf("Enter Book Title: ");
    scanf(" %[^\n]%*c", book1.title);  // To read full title including spaces
    printf("Enter Author Name: ");
    scanf(" %[^\n]%*c", book1.author_name);  // To read full author name including spaces
    printf("Enter Price: ");
    scanf("%f", &book1.price);

    // Pass book1 to function to print details
    printBookDetails(book1);

    return 0;
}