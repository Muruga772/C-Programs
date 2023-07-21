#include<stdio.h>
struct node
{
    int data;
    struct node*next;
};
void create()
{
    struct node=newnode=malloc(Size of(struct node));
    scanf("%d",&newnode->data)
    newnode->next=NULL;
    if(head==NULL)
    {

        head=newnode;
        temp=newnode;
    }
    else{  c
        temp->next=newnode;
        temp=temp->next;
        temp->next=head;
    }
}
