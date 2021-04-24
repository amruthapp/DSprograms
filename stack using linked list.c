#include<stdio.h>
#include<stdlib.h>
struct Node
 {
  int data;
  struct Node *Next;
 };
struct Node *push(struct Node *top)
 {
  struct Node *temp;
  int val;
  printf("\nenter a value : ");
  scanf("%d",&val);
  temp=(struct Node*)malloc(sizeof(struct Node));
  temp->data=val;
  if(top==NULL)
    temp->Next=NULL;
  else
    temp->Next=top;
  top=temp;
  printf("\n one value inserted into the STACK\n");
  return top;
 }
struct Node *pop(struct Node *top)
 {
  if(top==NULL)
    printf("\n STACK underflow\n");
  else
    {
     struct Node *temp=top;
     printf("\n deleted element : %d ",temp->data);
     top=temp->Next;
     free(temp);
    }
    return top;
  }
void display(struct Node *top)
 {
  if(top==NULL)
   printf("\n stack is empty\n");
  else
   {
   struct Node *temp=top;
   while(temp->Next!=NULL)
    {
     printf("%d--->",temp->data);
     temp=temp->Next;
    }
   printf("%d--->NULL",temp->data);
   }
 }
void main()
 {
  int ch;
  int e=1;
  struct Node *top=NULL;
  printf("\n STACK using linked list\n");
  while(e)
   {
    printf("\n-----------MENU------------\n");
    printf("\n\t 1.PUSH \n\t 2.POP \n\t 3.DISPLAY \n\t 4.EXIT \n");
    printf("\n---------------------------\n");
    printf("\nenter your choice\n");
    scanf("%d",&ch);
    switch(ch)
     {
      case 1:top=push(top);
             break;
      case 2:top=pop(top);
             break;
      case 3:display(top);
             break;
      case 4:e=0;
             printf("\nexiting from the program\n");
             break;
      default:printf("\n please enter valid choice\n");
      }
    }
 }  
  
   
 
