#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void sortedInsert(Node** headRef, Node* newNode) {
    Node* current;
    if (*headRef == NULL || (*headRef)->data >= newNode->data) {
        newNode->next = *headRef;
        *headRef = newNode;
    } else {
        current = *headRef;
        while (current->next != NULL && current->next->data < newNode->data) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

void insertionSort(Node** headRef) {
    Node* sorted = NULL;
    Node* current = *headRef;
    while (current != NULL) {
        Node* next = current->next;
        sortedInsert(&sorted, current);
        current = next;
    }
    *headRef = sorted;
}

void push(Node** headRef, int newData) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = newData;
    newNode->next = *headRef;
    *headRef = newNode;
}

int main() {
    Node* head = NULL;

    push(&head, 5);
    push(&head, 20);
    push(&head, 4);
    push(&head, 3);
    push(&head, 30);
    push(&head, 10);

    printf("Linked List before sorting:\n");
    printList(head);

    insertionSort(&head);

    printf("Linked List after sorting:\n");
    printList(head);

    return 0;
}
