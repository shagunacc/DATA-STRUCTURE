#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NIL -1
typedef struct stacktype{
					 int a[10];
					 int top;
					 }stack;

 void push(stack  *,int);
 int pop( stack *);
 int isfull(stack);
 int isempty(stack);
 void main()
 {
 int data,ch;
 stack s;
 s.top=NIL;
 clrscr();
 while(1)
{ printf("\nenter your choice\n 1. push\n 2.pop\n 3. exit");
 scanf("%d",&ch);
 switch(ch)
 { case 1:printf("enter the data to be push");
		   scanf("%d",&data);
		   push(&s,data);
		   break;
   case 2: data=pop(&s);

			printf("\nelement is pop out\n%d",data);
			 break;
   case 3: exit(1);
		   break;
   default: printf("you enter wrong choice");
			break;
 }
 }
 getch();
 }
 int isfull( stack s)
 { if(s.top==9)
   return(1);
   else
	return(0);
	}
 void push( stack *p,int data)
  { int c;
   c=isfull(*p);
   if (c==0)
   {
	p->top=p->top+1;
	 p->a[p->top]=data;
	 }
	else
	printf("stack is full");
	}
 int isempty(stack s)
 { if(s.top==NIL)
	return(1);
   else
	return(0);
 }
 int pop(stack *p)
 { int data,b;
	b=isempty(*p);
	if(b==0)
 {
   data=p->a[p->top];
   p->top=p->top-1;
   return(data);
   }
 else
 {
 printf("stack is empty");
 return(0);
}}
