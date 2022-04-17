#include<stdio.h>
#include<conio.h>
#include<alloc.h>
typedef struct lklist{
int info;
struct lklist *next;
}node;
void main()
{
int ch,data,item,i=0;
node *head=NULL;
node *temp,*ptr;
clrscr();
while(1)
{
printf("\n1.insert at beg\n");
printf("2.traversing\n");
printf("3.insert at end\n");
printf("4.insert after element\n");
printf("5.search an element\n");
printf("6.exit\n");
printf("enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("enter element to insert");
scanf("%d",&data);
temp=(node *)malloc (sizeof(node));
temp->info=data;
temp->next=head;
head=temp;
break;
case 2:temp=head;
while(temp!=NULL)
{
printf("%d ",temp->info);
temp=temp->next;
}
break;
case 3:ptr=head;
printf("enter element to insert");
scanf("%d",&data);
temp=(node *)malloc (sizeof(node));
temp->info=data;
temp->next=NULL;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=temp;
break;
case 4:printf("enter element after which you want to insert");
scanf("%d",&item);
ptr=head;
while(ptr!=NULL)
{
if(ptr->info==item)
break;
}
if(ptr==NULL)
{
printf("element not found");
}
else
{
printf("\nenter element to insert");
scanf("%d",&data);
temp=(node *)malloc(sizeof(node));
temp->info=data;
temp->next=ptr->next;
ptr->next=temp;
}
break;
case 5:printf("enter element you want to search");
scanf("%d",&item);
ptr=head;
while(ptr!=NULL)
{
if(item==ptr->info)
{
printf("element found at %d position",i+1);
break;
}
else
{
i++;
ptr=ptr->next;
}
}
if(ptr==NULL)
{
printf("element not found");
}
break;
case 6:exit(1);
break;
}
}
getch();
}






