#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // Allocate memory for nodes (same as before)
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // Get user input - English prompts
    printf("Enter first number: ");
    scanf("%d", &head->data);
    
    printf("Enter second number: ");
    scanf("%d", &second->data);
    
    printf("Enter third number: ");
    scanf("%d", &third->data);

    // Link nodes (same as before)
    head->next = second;
    second->next = third;
    third->next = NULL;

    // Display the linked list
    printf("Linked List: ");
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    // Free memory
    free(head);
    free(second);
    free(third);

    return 0;
}
