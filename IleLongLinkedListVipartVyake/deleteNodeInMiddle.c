#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// void displayLL(struct Node *ptr);
// void DeleteMid(struct Node* head, int pos);

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
    
printf("\n\n the node before deleting the middle node\n");
printf("HEAD->");
printf("%d->", first->data);
printf("%d->", second->data);
printf("%d->",third->data);
printf("NULL");


 first->next = second;
    third->next = NULL;
    head = first;
printf("\n\n the new node after deleting the middle node\n");
printf("HEAD->");
printf("%d->", first->data);
printf("%d->",third->data);
printf("NULL");



    // printf("The created Linked List: ");
    // displayLL(head);
    // DeleteMid(head, 2);
    // printf("After deleting node at position 2: ");
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

// void DeleteMid(struct Node* head, int pos) {
//     if (head == NULL || pos < 1) return;
//     if (pos == 1) {
//         struct Node* temp = head;
//         head = head->next;
//         free(temp);
//         return;
//     }

//     struct Node* temp = head;
//     for (int i = 1; temp != NULL && i < pos - 1; i++) {
//         temp = temp->next;
//     }

//     if (temp == NULL || temp->next == NULL) return;

//     struct Node* next = temp->next->next;
//     free(temp->next);
//     temp->next = next;
// }
