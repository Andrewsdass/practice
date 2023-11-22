#include<stdio.h>
#include<stdlib.h>
#define MAX 10


typedef struct values
{
    int elements[MAX];
    int top;
}stack;
void createstack(stack *ps)
{
    //struct stack* ps= (struct stack*) malloc(sizeof(struct stack));
    ps->top = -1;
    return ps;
    
}


void push(stack *ps,int val)
{
    if( ps->top == (MAX-1))
  {
        printf("stack is full");
    }
    ps->elements[++ps->top] = val;

}

int pop(stack *ps)
{
    if(ps->top == -1)
    {
        printf("stack is empty");
        return 0;
    }
    int temp;
    temp= ps->elements[ps->top];
    ps->top--;
    return temp;
}

int peek(stack *ps)
{
    if(ps->top == -1)
    {
        printf("stack is empty");
        return 0;
    }
    return ps->elements[ps->top];
}

int display(stack *ps)
{
    int i;
    for(i=ps->top;i>=0;i++)
    {
       printf("%d",ps->elements[i]);
    }
}
void main()
{
    stack s; 
    createstack(&s);
    while(1)
    {
      int choice,val;
      printf("\n OPTIONS");
      printf("\n 1.push ");
      printf("\n 2.pop");
      printf("\n 3.peek");
      printf("\n 4.search");
      printf("\n 5.display");
      printf("\n 6.exit");
      printf("\n.......................................");
      printf("\n enter the choice:");
      scanf("%d",&choice);
      printf("\n.......................................");

      switch (choice)
      {
      case 1:
        printf("\nenter the value to push :");
        scanf("%d",&val);
        push(&s,val);
        break;

      case 2:
        printf("\nenter the value to pop :");
        scanf("%d",&val);
        pop(&s);
        break;

      case 3:
        peek(&s);
        break;

      case 4:
        printf("\nenter the value to search :");
        scanf("%d",&val);
        //search(val);
        break;

      case 5:
        display(&s);
        break;  
        
        case 6:
        printf("\n exit");
        break;

      
      default:
        break;
      }
    }
}
