#include<stdio.h>
#include<stdlib.h>
//declaration of a linked list
struct  Node{
    int data;
    struct Node* next;
};
//Definition of all functions
void displayLL(struct Node *ptr);
void InsertNodeAtBeg(struct Node* head,int value);
void InsertAfterNode(struct Node* head,int node_val,int value);
void InsertAtlast(struct Node* head,int value);
void DeleteBeg(struct Node* head);
void DeleteEnd(struct Node* head);
void DeleteMid(struct Node* head,int pos);
int main()
{
    //Nodes
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;

    //Allocating dynamic memory
    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third =(struct Node*)malloc(sizeof(struct Node));
    //Given data to the nodes and linking the nodes
    first->data=1;
    first->next = second;
    second->data=2;
    second->next =third;
    third->data=3;
    third->next=NULL;
    head = first;
    //Calling the functions
    printf("The created Linked List:");
    displayLL(head);
    printf("\nInsertions:");
    InsertNodeAtBeg(head,5);
    InsertAfterNode(head,2,10);
    InsertAtlast(head,17);
    printf("\n\nDeletions");
    DeleteBeg(head);
    DeleteEnd(head);
    DeleteMid(head,3);
}
//displaying the linked list
void displayLL(struct Node *ptr)
{
    printf("HEAD->");
    while(ptr != NULL)
    {
        printf("%d->",ptr->data);
        ptr =ptr->next;
    }
    printf("NULL");
}
//Inserting a node at the beginning
void InsertNodeAtBeg(struct Node* head,int value)
{
    printf("\n\nAfter inserting %d at the beginning: ",value);
    
    struct Node* newnode;
    newnode = (struct Node*)malloc(sizeof(struct Node));
    displayLL(head);
    newnode->data=value;
    newnode->next = head;
    head=newnode;
    printf("----->");
    displayLL(head);
}
//Inserting a node after the node with the given value
void InsertAfterNode(struct Node* head,int node_val,int value)
{
    printf("\n\nAfter inserting %d after %d node:",value,node_val);
    displayLL(head);
    printf("---->");
    struct Node* newnode;
    newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode -> data = value;
    struct Node* ptr = head;
    while(ptr != NULL)
    {
        if(ptr->data == node_val)
        {
            newnode->next = ptr -> next;
            ptr -> next = newnode;
            break;
        }
        ptr = ptr->next;
    }
    displayLL(head);
}
//Insert a node at the end of the linked list
void InsertAtlast(struct Node* head,int value){
    printf("\n\nAfter inseting %d at the end:",value);
    displayLL(head);
    printf("---->");
    struct Node* newnode;
    struct Node* ptr = head;
    newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data=value;
    newnode->next=NULL;
    while(ptr->next!=NULL)
    {
        ptr = ptr->next;
    }
    ptr->next=newnode;
    displayLL(head);
}
//deleting the first node
void DeleteBeg(struct Node* head)
{
    printf("\n\nAfter deleting the 1st node: ");
    displayLL(head);
    printf("---->");
    struct Node* temp = head->next;
    head = head ->next;
    displayLL(head);
}
//Deleting the last node
void DeleteEnd(struct Node* head)
{
    printf("\n\nAfter deleting the last node: ");
    displayLL(head);
    printf("---->");
    struct Node* ptr = head;
    while(ptr->next->next != NULL)
    {
        ptr = ptr -> next;
    }
    ptr->next=NULL;
    displayLL(head);
}
//deleting from the middle
void DeleteMid(struct Node* head,int pos)
{
    printf("\n\nAfter deleting node from %d position:",pos);
    displayLL(head);
    printf("---->");
    int i;
    struct Node* temp = head;
    for(i=2;i<pos;i++)
    {
        if(temp->next!=NULL)
        {
            temp = temp->next;
        }
    }
    temp->next=temp->next->next;
    displayLL(head);
}