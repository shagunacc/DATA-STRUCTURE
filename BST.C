#include<stdio.h>
#include<conio.h>
struct bst{
	  struct bst *left;
	  int info;
	  struct bst *right;
	  };
void main()
{
void inorder(struct bst *);
struct bst *root=NULL;
int ch,ele;
while(1)
{
printf("enter 1.for insertion\n2.for traversal\n3.to exit\n");
printf("enter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("enter element to insert: ");
scanf("%d",&ele);
insert(      );
break;
case 2:inorder(root);
break;
case 3:exit(1);
break;
default:printf("wrong choice");
break;
}
}
getch();
}
void inorder(struct bst *root)
{
if(root!=NULL)
{
inorder(root->left);
printf("%d",root->info);
inorder(root->right);
}
}
void insert
