#include <stdio.h>
#include <stdlib.h>

// Define structure
struct Node {
    int data;
    struct Node* next;
};

int main() {
    int n;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("List is empty.\n");
        return 0;
    }

    struct Node *head = NULL, *temp = NULL, *newNode = NULL;

    printf("Enter %d integers:\n", n);

    for(int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);

        // Allocate memory
        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;   // First node
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    // Traverse and print
    printf("Linked List:\n");
    temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}