#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    // Original code:
    // The error in the original code is that the pointers head, second, and third are not initialized
    //struct Node* head;
    //struct Node* second;
    //struct Node* third;

    // Modified code:
    // Properly initialize the pointers to NULL
    // Otherwise, they will contain garbage values, which can lead to undefined behavior
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    // Original code:
    // The error in the original code is that the next pointer of the third node is set to zero,
    // rather than NULL, which is the correct way to indicate the end of the linked list
    // third->next = 0;

    // Modified code:
    // Set the next pointer of the third node to NULL, rather than to zero
    // This is the correct way to indicate the end of the linked list
    // The original code would compile, but it is not the best practice, since
    // it is better to use NULL to indicate a null pointer
    third->next = NULL;

    printList(head);

    // Original code:
    // The error in the original code is that the memory allocated for the nodes is not freed

    // Modified code:
    // Free the memory allocated for the nodes
    // This is important to prevent memory leaks, as the memory allocated with malloc
    // must be explicitly deallocated with free
    free(head);
    free(second);
    free(third);

    return 0;
}