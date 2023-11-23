#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

 struct values
{
    int data;
    struct vaues* next;
};
typedef struct values node;
node* top=NULL;




void push(int val)
{
    node* newnode= (node*) malloc(sizeof(node));
    newnode->data=val;
    newnode->next=top;
    top=newnode;
    
}

int pop()
{ 
    node* del= top;
    top=top->next;
    int temp=del->data;
    printf("\n pop values is :%d",temp);
    printf("|___%d___|\n",temp);
    free (del);

}

int peek()
{
    if(top==NULL)
    {
        printf("list is empty");
    }
    
    printf("\n current value:%d",top->data);
     printf("|___%d___|\n",top->data);
}

void display()
{
    if(top==NULL) 
    {
        printf("node is empty");
    }
    node* temp=top;
    printf("\n elements in the list are:\n");
    while(temp!=NULL)
    {
        printf("%d\t\t",temp->data);
        printf("|___%d___|\n",temp->data);
        temp=temp->next;
         
    }
}

int search(int target)
{
    if(top==NULL) 
    {
        printf("node is empty");
    }
    node* temp=top;
    
    
    while(temp!=NULL)
    {
        if(temp->data==target)
    {
       
       printf("|___%d___|  <--search found\n",temp->data);
    }
    else
    {
        
        printf("|___%d___|\n",temp->data);
    }
        temp=temp->next;
         
    }
}
     

void main()
{
    int target;
    while(1)
    {
      int choice,data;
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
        scanf("%d",&data);
        push(data);
        break;

      case 2:
        pop();
        break;

      case 3:
        peek();
        break;

      case 4:
      printf("\nenter the value to search :");
        scanf("%d",&target);
        search(target);
        break;

      case 5:
        display();
        break;  
        
        case 6:
        printf("\n exit");
        printf("\n thank you");
        printf("\n______________________________");
        return 0;
        #include<stdio.h>
#include<stdlib.h>
#include<limits.h>

 struct values
{
    int data;
    struct vaues* next;
};
typedef struct values node;
node* top=NULL;




void push(int val)
{
    node* newnode= (node*) malloc(sizeof(node));
    newnode->data=val;
    newnode->next=top;
    top=newnode;
    
}

int pop()
{ 
    node* del= top;
    top=top->next;
    int temp=del->data;
    printf("\n pop values is :%d",temp);
    printf("|___%d___|\n",temp);
    free (del);

}

int peek()
{
    if(top==NULL)
    {
        printf("list is empty");
    }
    
    printf("\n current value:%d",top->data);
     printf("|___%d___|\n",top->data);
}

void display()
{
    if(top==NULL) 
    {
        printf("node is empty");
    }
    node* temp=top;
    printf("\n elements in the list are:");
    while(temp!=NULL)
    {
        printf("%d\t\t",temp->data);
        printf("|___%d___|\n",temp->data);
        temp=temp->next;
         
    }
}
     

void main()
{
    
    while(1)
    {
      int choice,data;
      printf("\n OPTIONS");
      printf("\n 1.push ");
      printf("\n 2.pop");
      printf("\n 3.peek");
      //printf("\n 4.search");
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
        scanf("%d",&data);
        push(data);
        break;

      case 2:
        pop();
        break;

      case 3:
        peek();
        break;

      case 4:
      printf("\nenter the value to search :");
        scanf("%d",&data);
        //search(val);
        break;

      case 5:
        display();
        break;  
        
        case 6:
        printf("\n exit");
        printf("\n thank you");
        printf("\n______________________________");
        return 0;
        

      
      default:printf("invalid code:");

      }
    }
}

      
      default:printf("invalid code:");

      }
    }
}
