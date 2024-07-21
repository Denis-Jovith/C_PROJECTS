#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void displayLL(struct Node *ptr);
void DeleteEnd(struct Node* head);

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

    
printf("\n\nYour Nodes before deletion\n");
printf("HEAD->");
printf("%d->", first->data);
printf("%d->", second->data);
printf("%d->",third->data);
printf("NULL");

    first->next = second;
    second->next = NULL;
    head = first;
    
    printf("\n\nYour Nodes after deletion\n");
    printf("HEAD->");
printf("%d->", first->data);
printf("%d->", second->data);
printf("NULL");


    // printf("The created Linked List: ");
    // displayLL(head);
    // DeleteEnd(head);
    // printf("After deleting the last node: ");
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

// void DeleteEnd(struct Node* head) {
//     if (head == NULL || head->next == NULL) return;
//     struct Node* ptr = head;
//     while (ptr->next->next != NULL) {
//         ptr = ptr->next;
//     }
//     free(ptr->next);
//     ptr->next = NULL;
// }
