#include<iostream>
#include<stdlib.h>
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
void Selectionsort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int m=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[m]>a[j])
            {
                m=j;
            }
        }swap(&a[m],&a[i]);
    }
}
void Duplicate(int a[],int n)
{   int j=0;int *t;
    t=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            t[j++]=a[i];
        }
    }t[j++]=a[n-1];printf("Array without duplicates: ");
    for(int i=0;i<j;i++)
    {
        printf("%d ",t[i]);
    }
}
int main()
{
    int *ar,n;
    ar=(int*)malloc(n*sizeof(int));
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {scanf("%d",&ar[i]);}
    Selectionsort(ar,n);
    Duplicate(ar,n);
}