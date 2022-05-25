#include<stdio.h>
int main()
{
    void bubble(int [],int);
    int a[100],n,i;
    printf("enter no of elements: \n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nBefore sorting: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    bubble(a,n);
    printf("\nAfter sorting: \n");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
void bubble(int a[],int n)
{
    int temp,i,j,flag=1;
   for(i=0;i<n-1&&flag;i++)
   {
       flag=0;
       for(j=0;j<n-i-1;j++)
       {
           if(a[j]>a[j+1])
           {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
               flag=1;
           }
       }
   }
}
