#include<stdio.h>
int main()
{
    void insertion(int [],int);
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
    insertion(a,n);
    printf("\nAfter sorting: \n");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
void insertion(int a[],int n)
{
    int temp,i,j;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j >= 0 && a[j] > temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}
