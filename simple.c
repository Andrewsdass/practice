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
    printf("inserting %d at begining ",&val);
    
}

void display(){
    if(head==NULL) 
    {
        printf("node is empty");
    }
    node* temp=head;
    printf("elements in the list are:");
    if(temp!=NULL)
    {
        printf("%d",temp->data);
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
    if(pos==1)
    {
        head=head -> next;
        printf("deleted %d",temp -> next);
        free(temp);
    }
    if(pos==0)
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
        printf("deleted %d",temp->next);
        free(temp);
        
    }
    
}
}

void main()
{
    int choice,data,pos;
    while(1){
    printf("1.insert at begining :");
    printf("\n2.display :");
    printf("\n3.insert at specified position :");
    printf("\n4.delete at specified position :");
    printf("\n5.exit:");
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
        
        case 5:printf("exit");
        break;
        
        default: printf("invalid number:");
        
        
    }
    }
}
    
    
    

