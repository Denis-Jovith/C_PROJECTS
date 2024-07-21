#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// void displayLL(struct Node *ptr);
// void InsertAfterNode(struct Node* head, int node_val, int value);

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
printf("\n🐍🤔😂😂Amigo here are your nodes before insertion\n\n\n");
printf("\n\n\nHEAD->");
printf("%d->", first->data);
printf("%d->", second->data);
printf("%d->",third->data);
printf("NULL");


    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=10;
    first->next = second;
    second->next = newNode;
    newNode->next=third;
    third->next = NULL;
    head = first;

printf("😉🎉🧑‍💻\n\nThe nodes after insertion after a given node\n\n");
printf("HEAD->");
printf("%d->", first->data);
printf("%d->", second->data);
printf("%d->", newNode->data);
printf("%d->",third->data);
printf("NULL");
    

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

// void InsertAfterNode(struct Node* head, int node_val, int value) {
//     struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
//     newnode->data = value;
//     struct Node* ptr = head;
//     while (ptr != NULL) {
//         if (ptr->data == node_val) {
//             newnode->next = ptr->next;
//             ptr->next = newnode;
//             break;
//         }
//         ptr = ptr->next;
//     }
// }