#include<stdio.h>

void push(int a[],int *top)
{
  int e;
  printf("\nenter the number");
  scanf("%d",&e);
  *top=*top+1;
  a[*top]=e;
  printf("\n entered element %d pushed into the stack",e);
}

void pop(int a[],int *top)
 {
   e=a[*top];
   printf("\n the element %d poped from STACK",e);
   *top=*top-1;
 }
 
void display(int a[],int *top)
 {
   int i;
   printf("\n the stack element are:");
   for(i=*top;i>=0;i--)
     printf("%d",a[i]);
 }
 
int main()
 {
   int arr[10],top=-1;
   int ch,e=1;
   while(e)
    {
      printf("\n--------------MENU-----------\n");
      printf("\n\t 1.PUSH \n\t 2.POP \n\t 3.DISPLAY \n\t 4.EXIT");
      printf("\n-----------------------------\n");
      printf("\n enter your choice : \n");
      scanf("%d",&ch);
      switch(ch)
       {
         case 1:push(arr,&top);
                break;
         case 2:pop(arr,&top);
                break;
         case 3:(arr,&top);
                break;
         case 4:e=0;
                printf("\n exiting from the program \n");
                break;
         default:printf("\nplease enter valid choice\n");
       }
     }
   return 0;
 }
         
                
                
    
