#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void InsertAtBeginning(int value);
void InsertAtEnd(int value);
void InsertAtPosition(int value,int position);
void RemoveAtBeginning();
void RemoveAtEnd();
void RemoveAtPosition(int position);
void display();
int CheckEmpty();
struct Node{
 int data;
 struct Node *next;
}* head=NULL;
int main()
{
 int value,choice;
 char c;

 do{
         printf("Enter\n1-Insert\n2-Remove\n3-Display\n");
         scanf("%d",&choice);
 switch(choice)
 {
  case 1:
  {
   int x;
   printf("Enter\n1-Insert at Beginning\n2-Insert at End\n3-Insert at Position\n");
   scanf("%d",&x);
   printf("Enter Value to be Inserted\n");
   scanf("%d",&value);
   switch(x)
   {
    case 1:
    {
     InsertAtBeginning(value);
     break;
    }

    case 2:
    {
     InsertAtEnd(value);
     break;
    }
    case 3:
    {
     int position;
     printf("Enter position to insert a value(counted from 0)\n");
     scanf("%d",&position);
     InsertAtPosition(value,position);
     break;
    }
    default :
    {
     printf("Enter Valid Choice\n");
     break;
    }
   }

   break;
  }

  case 2:
  {
   int x;
   printf("Enter\n1-Delete at Beginning\n2-Delete At End\n3-Delete at Position\n");
   scanf("%d",&x);
   switch(x)
   {
    case 1:
    {
     RemoveAtBeginning();
     break;
    }
    case 2:
    {
     RemoveAtEnd();
     break;
    }
    case 3:
    {
     int position;
     printf("Enter position to be removed starting from 1\n");
     scanf("%d",&position);
     RemoveAtPosition(position);
     break;
    }
    default :
    {
     printf("Enter Valid Choice\n");
     break;
    }
   }
   break;
  }
  case 3:
  {
   display();
   break;
  }
  default:
  {
   printf("Enter Valid Choice\n");
   break;
  }
 }
 printf("Enter 'Y' to continue else any letter\n");
 fflush(stdin);
 c=getche();
 printf("\n");
 }while(c=='Y' || c=='y');

 return(0);
}

void InsertAtBeginning(int value){
   struct Node *newNumber;
   newNumber = (struct Node*)malloc(sizeof(struct Node));
   newNumber->data = value;
   if(head == NULL)
   {
      newNumber->next = NULL;
      head = newNumber;
   }
   else
   {
      newNumber->next = head;
      head = newNumber;
   }
   printf("Given Number %d is inserted at beginning Successfully\n",value);

}
void InsertAtEnd(int value){
   struct Node *newNumber;
   newNumber = (struct Node*)malloc(sizeof(struct Node));
   newNumber->data = value;
   newNumber->next=NULL;
 if(head==NULL)
 {
  head=newNumber;
 }
 else
 {
  struct Node *temp;
  temp=head;
  while(temp->next!=NULL)
  {
   temp=temp->next;
  }
  temp->next=newNumber;
 }

}
void InsertAtPosition(int value,int position){
   struct Node *newNumber,*temp;
   int count,flag;
   newNumber = (struct Node*)malloc(sizeof(struct Node));
   newNumber->data = value;
   temp=head;
   flag=CheckEmpty();
   if(flag==1)
   {
    int flag1=0;
    count=0;
      while(temp!=NULL)
        {
         if(count==position-1)
          {
        flag1=1;
        newNumber->next=temp->next;
           temp->next=newNumber;
       }
       else
    {
        temp=temp->next;

       }
       count++;
          }
            if(flag1==0)
            {
        printf("Entered Position Not available\n");
            }
      else
      {
       printf("Given number %d is inserted at position %d successfully\n",value,position);
      }
     }
     else
     {
      printf("List is Empty\n");
     }
}
void RemoveAtBeginning(){
 int flag=CheckEmpty();
 if(flag==1)
 {
  struct Node *temp;
  temp=head;
  if(temp->next==NULL)
  {
   head=NULL;
   free(temp);
  }
  else{
   head=temp->next;
         free(temp);
  }
     printf("Deleted Successfully\n");
 }
 else
 {
  printf("List is Empty\n");
 }
}
void RemoveAtEnd(){
 int flag=CheckEmpty();
 if(flag==1)
 {
  if(head->next==NULL)
  {
   head=NULL;
  }
  else
  {
   struct Node *temp=head,*temp1;
      while(temp->next!=NULL)
      {
        temp1=temp;
        temp=temp->next;
      }
      temp1->next=NULL;
      free(temp);
  }

 }
 else
 {
  printf("List Empty.Try again!\n");
 }
}
void RemoveAtPosition(int position){
 int flag=CheckEmpty();
 if(flag==1)
 {
  int count=0,flag1=0,i;
  struct Node *temp=head;
   if(position==1)
   {
    head=temp->next;
    free(temp);
    return;
   }
   for(i=0;i<position-2;i++)
   {
        temp=temp->next;
   }
   struct Node *temp1=temp->next;
   temp->next=temp1->next;
   free(temp1);


 }
 else
 {
  printf("List is empty\n");
 }

}

void display(){
 int flag=CheckEmpty();
 if(flag==1)
 {
      struct Node *temp;
     temp=head;
      while(temp->next!=NULL)
     {
      printf("%d->",temp->data);
      temp=temp->next;
      }
      printf("%d",temp->data);
        printf("\n");
 }
 else
 {
  printf("No List Available\n");
 }
}

int CheckEmpty()
{
 if(head==NULL)
 return 0;
 else
 return 1;
}