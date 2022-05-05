#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
typedef struct polynomial
{ int coff;
int power;
 struct polynomial *next;
}node;
void main()
{ node *head=NULL;
node *head2=NULL;
int c,p,i,n,m,co,po;
void insert_at_beg(node **,int ,int);
void traverse(node*);
clrscr();
printf("enter the no of terms 1 polynomial");
scanf("%d",&n);
for(i=1;i<=n;i++)
{printf("enter the coffecient and power of term %d\n",i);
scanf("%d %d",&c,&p);
insert_at_beg(&head, c, p);

}
printf("enter the no of terms 2 polynomial");
scanf("%d",&m);
for(i=1;i<=m;i++)
{printf("enter the coffecient and power of term %d\n",i);
scanf("%d %d",&co,&po);
insert_at_beg(&head2, co, po);

}
printf("1 polynomial is\n");
traverse(head);
printf("\n 2 polynomial is");
traverse(head2);
getch();
}
void insert_at_beg( node ** head,int c,int p)
{ node * temp;
  temp=(node*)malloc(sizeof(node));
  temp->coff=c;
  temp->power=p;
  temp->next=*head;
  *head=temp;
  }
void traverse(node *head)
{ while(head!=NULL)
 { printf("%dx^%d +",head->coff,head->power);
 head=head->next;
 }
 }