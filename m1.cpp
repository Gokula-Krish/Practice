#include<iostream>
void Spiral(int a[100][100],int m,int n)
{
    printf("Spiral matrix: ");
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
            for(int i=n-1;i>=l;--i)
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
    int ar[100][100];
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
    printf("The matrix is:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",ar[i][j]);
        }printf("\n");
    }
    Spiral(ar,m,n);
}