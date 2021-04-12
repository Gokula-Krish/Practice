#include<iostream>
#define r 1000
#define c 1000
void Spiral(int a[r][c],int m,int n)
{
    int k=0,l=0;
    while(k<m && l<n)
    {
        for(int i=k;i<n;i++)
        {
            printf("%d ",a[k][i]);
        }k++;
        for(int i=k;i<m;i++)
        {
            printf("%d ",a[i][n-1]);
        }n--;
        if(k<m)
        {
            for(int i=0;i>=l;--i)
            {
                printf("%d ",a[m-1][i]);
            }m--;
        }
        if(l<n)
        {
            for(int i=m-1;i>=k;--i)
            {
                printf("%d ",a[i][l]);
            }l++;
        }
    }
}
int main()
{
    int ar[r][c];
    int m,n;
    printf("Enter the number of rows and columns :");
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    printf("The matrix is: ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",ar[i][j]);
        }printf("\n");
    }
    Spiral(ar,m,n);
}