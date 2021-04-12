#include<bits/stdc++.h>
void Union(int ar1[],int ar2[],int m,int n)
{   printf("Union: ");
    int i = 0, j = 0; 
    while (i < m && j < n) { 
        if (ar1[i] < ar2[j]) 
           printf("%d ",ar1[i++]); 
        else if (ar2[j] < ar1[i]) 
            printf("%d ",ar2[j++]); 
        else { 
            printf("%d ",ar2[j++]); 
            i++; 
        } 
    } 
    /* Print remaining elements of the larger array */
    while (i < m) 
        printf("%d ",ar1[i++]); 
    while (j < n) 
        printf("%d ",ar2[j++]);
}
void Intersection(int arr1[], int arr2[], int m, int n) 
{   
    printf("intersection: ");
    int i = 0, j = 0; 
    while (i < m && j < n) { 
        if (arr1[i] < arr2[j]) 
            i++; 
        else if (arr2[j] < arr1[i]) 
            j++; 
        else
        { 
            printf("%d ",arr2[j++]); 
            i++; 
        } 
    } 
}
int main()
{
    int *ar,*ar1;int n,m;
    ar=(int*)malloc(n*sizeof(int));
    ar1=(int*)malloc(m*sizeof(int));
    printf("Enter the number of elements(I array): ");
    scanf("%d ",&m);
    for(int i=0;i<m;i++)
    {scanf("%d",&ar[i]);}std::sort(ar,ar+m);
    printf("Enter the number of elements(II array): ");
    scanf("%d ",&n);
    for(int i=0;i<n;i++)
    {scanf("%d",&ar1[i]);}std::sort(ar1,ar1+n);
    Intersection(ar,ar1,m,n);printf("\n");
    Union(ar,ar1,m,n);
}