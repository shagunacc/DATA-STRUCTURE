#include<stdio.h>
#include<conio.h>
void toh(int,char,char,char);
void main()
{ int n;
clrscr();
printf("enter no of disk\n");
scanf("%d",&n);
toh(n,'A','B','C');
getch();
}
void toh(int n,char A,char B,char C)
{
if(n==1)
printf("move %c to %c",A,B);
else
{
toh(n-1,A,C,B);
printf("move %c to %c",A,B);
toh(n-1,C,B,A);
}
}