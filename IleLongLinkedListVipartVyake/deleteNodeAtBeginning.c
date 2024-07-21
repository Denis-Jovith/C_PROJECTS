#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// void displayLL(struct Node *ptr);
// void DeleteBeg(struct Node** head);

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
      

printf("HEAD->");
printf("%d->", first->data);
printf("%d->", second->data);
printf("%d->",third->data);
printf("NULL");

    head=second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;

    printf("\n\n\n🤔The nodes after deleting the first nod\n");
    printf("HEAD->");
printf("%d->", second->data);
printf("%d->",third->data);
printf("NULL");
    



    // printf("The created Linked List: ");
    // displayLL(head);
    // DeleteBeg(&head);
    // printf("After deleting the 1st node: ");
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

// void DeleteBeg(struct Node** head) {
//     if (*head == NULL) return;
//     struct Node* temp = *head;
//     *head = (*head)->next;
//     free(temp);
// }
