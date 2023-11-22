#include<stdio.h>
#include<stdlib.h>
struct inode
{
    int data;
    struct inode* next;
};
typedef struct inode node;
node* head=NULL;

void insert_date_begin(int val)
{
    node* newnode= (node*) malloc(sizeof(node));
    if(newnode==NULL)
    {
        printf("out of memory");
    }
    newnode->data=val;
    if(head==NULL)
    {
        newnode->next=NULL;
        head=newnode;
    }
    else
    {
        newnode->next=head;
        head=newnode;
    }
    printf("inserting %d at begining \n",val);
   // printf("|___%d___|\n",val);
    
    
}

void display(){
    if(head==NULL) 
    {
        printf("node is empty");
    }
    node* temp=head;
    printf("elements in the list are:\n");
    while(temp!=NULL)
    {
        printf("%d\t\t",temp->data);
      //printf("|__%d__|\n",temp->data);
         temp=temp->next;
         
    }
}
void insert_specified_position(int pos,int val)
{
    int i;
    node* newnode = (node*) malloc(sizeof(node));
    if(newnode==NULL)
    {
        printf("list is empty");
    }
    newnode->data=val;
    node* temp=head;
    for(i=1;i<=pos-1;i++)
    {
        temp=temp->next;
        if(temp==NULL)
        {
            printf("invalid position"); 
        }
    }
    newnode->next=temp->next;
    temp->next=newnode;

printf("insert  %d at position %d",val,pos);
}

void delete_pos(int pos)
{
    int i;
    node* temp= head;
    node* pre;
    if(head==NULL)
    {
        printf("empty");
    }
    if(pos==0)
    {
        head=head -> next;
        printf("deleted %d",temp -> data);
        free(temp);
    }
    if(pos==1)
    {
    for(i=1;i<=pos;i++)
    {
        pre=temp;
        temp=temp -> next;
        if(temp==NULL)
        {
            printf("invalid position \n");
        }
        pre->next=temp->next;
        printf("deleted %d",temp -> data);
        free(temp);
        
    }
    
}
}

void reverse()
{
   node* prev=NULL;
   node* current=head;
   node* next=head->next;
   while(current!=NULL)
   {
       next=current->next;
       current->next=prev;
       prev=current;
       current=next;
       
   }
   head=current;
}

void main()
{
    int choice,data,pos;
    while(1){
    printf("\n1.insert at begining ");
    printf("\n2.display ");
    printf("\n3.insert at specified position ");
    printf("\n4.delete at specified position ");
    printf("\n5.reverse");
    printf("\n6.exit");
    printf("\n________________________________\n");
    printf("enter the choice:");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1: printf("enter the data:");
        scanf("%d",&data);
        insert_date_begin(data);
        break;
        
        case 2: display();
        break;
        
        case 3:printf("enter the position start at o :");
        scanf("%d",&pos);
        if(pos<0){
            printf("invaild position");
            break;
        }
        printf("\nenter the data :");
        scanf("%d",&data);
        if(pos==0)
        {
           insert_date_begin(data);

        }
        if(pos!=0)
        {
          insert_specified_position(pos,data);
          break;
        }
        
        case 4:printf("enter the position:");
        scanf("%d",&pos);
        delete_pos(pos);
        break;
        
        case 5:reverse();
        display();
        break;
        
        case 6:printf("exit");
        break;
        
        default: printf("invalid number:");
        
        
    }
    }
}
    
    
    
