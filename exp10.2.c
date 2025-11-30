#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to insert new node after a given position
struct Node* insertAfter(struct Node* prev_node, int new_data) {
    if (prev_node == NULL) {
        printf("Previous node cannot be NULL\n");
        return NULL;
    }
    
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
    
    return new_node;
}

int main() {
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // Allocate memory
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // User input for original list
    printf("Enter first number: ");
    scanf("%d", &head->data);
    
    printf("Enter second number: ");
    scanf("%d", &second->data);
    
    printf("Enter third number: ");
    scanf("%d", &third->data);

    // Link original nodes
    head->next = second;
    second->next = third;
    third->next = NULL;

    printf("Original List: ");
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    // User input for new middle value
    int new_value;
    printf("Enter number to insert in middle (after %d): ", second->data);
    scanf("%d", &new_value);

    // Insert after second node (middle)
    insertAfter(second, new_value);

    printf("After insertion: ");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    // Free memory
    temp = head;
    while (temp != NULL) {
        struct Node* next = temp->next;
        free(temp);
        temp = next;
    }

    return 0;
}
