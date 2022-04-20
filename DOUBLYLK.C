#include<stdio.h>
#include<conio.h>
#include<alloc.h>
typedef struct dlklist{
struct dlklist *prev;
int info;
struct dlklist *next;
}node;
void main()
{
int ch,data;
node* head,*tail;
void create_dlklist(node **,node **);
create_dlklist(&head,&tail);
void insert_at_beg(node **,node **,int);
void insert_at_end(node **,node **,int);
void traverse(node *);
void traverse_in_rev_order(node *);
while(1)
{
printf("1.for inserting at beg\n2.for inserting at end\n3.for traversing\n4.for traversing in reverse order\n5.exit\n");
printf("enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("enter element to insert ");
scanf("%d",&data);
insert_at_beg(&head,&tail,data);
break;
case 2:printf("enter element to insert ");
scanf("%d",&data);
insert_at_end(&head,&tail,data);
break;
case 3:traverse(head);
break;
case 4:traverse_in_rev_order(tail);
break;
case 5:exit();
break;
default:printf("no choice available");
break;
}
}
getch();
}
void create_dlklist(node **head,node **tail)
{
*head=NULL;
*tail=NULL;
}
void insert_at_beg(node **head,node **tail,int data)
{
node*temp;
temp=(node *)malloc(sizeof(node));
temp->info=data;
temp->prev=NULL;
temp->next=*head;
if(*head==NULL)
{
*head=*tail=temp;
}
else
{
(*head)->prev=temp;
*head=temp;
}
}
void insert_at_end(node **head,node **tail,int data)
{
node*temp;
temp=(node *)malloc(sizeof(node));
temp->info=data;
temp->next=NULL;
temp->prev=*tail;
if(*head==NULL)
{
*head=*tail=temp;
}
else
{
(*tail)->next=temp;
*tail=temp;
}
}
void traverse(node *head)
{
while(head!=NULL)
{
printf("%d",head->info);
head=head->next;
}
}
void traverse_in_rev_order(node *tail)
{
while(tail!=NULL)
{
printf("%d",tail->info);
tail=tail->prev;
}
}




