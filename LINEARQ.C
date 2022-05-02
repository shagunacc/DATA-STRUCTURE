#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct queuetype{
			int front,rear;
			int a[10];
			}queue;
void insertion(queue *,int);
int deletion(queue *);
int isfull(queue);
int isempty(queue);
void traverse(queue);
void main()
{ queue q;
int ch,d,b;
clrscr();
 q.front=-1;
 q.rear=-1;

 while(1)
 {
  printf("enter your choice 1.enter element in queue 2.delete element 3.exit");
  scanf("%d",&ch);
  switch(ch)
  { case 1:
	   printf("enter element to be entered");
	    scanf("%d",&d);
	    insertion(&q,d);
	    break;
    case 2:
	    b=deletion(&q);
	    printf("deleted element is\n %d\n",b);
	    break;
    case 3:exit(1);
	   break;
    default : printf(" glt option uthaya h tumna ");
	      break;
    }
    }
    getch();
    }
    void insertion( queue * q,int d)
    { int i;
    if(q->front==(-1))
	{ q->front++;
	  q->rear++;
	  }
      else if((q->front!=0) && (q->rear==9))
	{for( i=q->front;i<=q->rear;i++)
	 {q->a[i- q->front]=q->a[i];
	  q->rear=q->rear - q->front;
	  q->front=0;
	  q->rear=q->rear+1;
	  }}
      else
      {
       q->rear++;
       }
       q->a[q->rear]=d;
       }

       int deletion(queue * q)
       { int d;
	 d=q->a[q->front];
	 if(q->front==q->rear)
	 {q->front=-1;
	  q->rear=-1;
	  }
	 else
	 {q->front=q->front+1;
	 }
	 return d;
	 }


