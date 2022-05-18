#include<stdio.h>
#include<conio.h>
int min(int [],int,int);
void selectionsort(int [],int,int);
void main()
{
int a[5],i;
clrscr();
printf("enter elements:");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
selectionsort(a,0,4);
for(i=0;i<5;i++)
{
printf("%d\n",a[i]);
}
getch();
}
int min(int a[],int l,int r)
{
int m,mi,i;
m=a[l];
for(i=l+1;i<=r;i++)
{
if(a[i]<m)
{
m=a[i];
mi=i;
}
}
return mi;
}
void selectionsort(int a[],int l,int r)
{
int i,mi,temp;
for(i=l;i<r;i++)
{
mi=min(a,i,r);
if(i!=mi)
{
temp=a[i];
a[i]=a[mi];
a[mi]=temp;
}
}
}
