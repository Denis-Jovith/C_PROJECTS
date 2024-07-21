#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// void displayLL(struct Node *ptr);
// void InsertNodeAtBeg(struct Node** head, int value);

int main() {
    struct Node *head;
    struct Node *first = (struct Node*)malloc(sizeof(struct Node));
    struct Node *second = (struct Node*)malloc(sizeof(struct Node));
    struct Node *third = (struct Node*)malloc(sizeof(struct Node));

    first->data = 1;
    first->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
    head = first;

    printf("\n\nHEAD->");
    printf("%d->", first->data);
    printf("%d->", second->data);
    printf("%d->",third->data);
    printf("NULL");

    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    head=newNode;
    newNode->next=first;
    newNode->data=5;
    first->next = second;
    second->next = third;
    third->next = NULL;

    printf("\n\nThe Nodes after inserting at the beginning");
    printf("\tHEAD->");
    printf("%d->", newNode->data);
    printf("%d->", first->data);
    printf("%d->", second->data);
    printf("%d->",third->data);
    printf("NULL");




    // printf("The created Linked List: ");
    // displayLL(head);
    // InsertNodeAtBeg(&head, 5);
    // printf("After inserting 5 at the beginning: ");
    // displayLL(head);

    return 0;
}

// void displayLL(struct Node *ptr) {
//     printf("HEAD->");
//     while (ptr != NULL) {
//         printf("%d->", ptr->data);
//         ptr = ptr->next;
//     }
//     printf("NULL\n");
// }

// void InsertNodeAtBeg(struct Node** head, int value) {
//     struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
//     newnode->data = value;
//     newnode->next = *head;
//     *head = newnode;
// }