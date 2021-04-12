#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
void rightrot(int *a,int n,int t)
{   
    int j=0;printf("Right rotation: ");
    int *c;c=(int*)malloc((n-t)*sizeof(int));
    for(int i=n-t;i<n;i++)
    {
        c[j++]=a[i];
    }
    for(int i=0;i<j;i++)
    {
        cout<<c[i]<<" ";
    }
    for(int i=0;i<(n-t);i++)
    {
        cout<<a[i]<<" ";
    }
}
void leftrot(int *a,int n,int t)
{   printf("Left rotation: ");
    int j=0;
    int *c;c=(int*)malloc((n-t)*sizeof(int));
    for(int i=0;i<t;i++)
    {
        c[j++]=a[i];
    }
    for(int i=t;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(int i=0;i<j;i++)
    {
        cout<<c[i]<<" ";
    }
}
int main()
{
    int t;
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {printf("%d ",a[i]);
    }printf("\n");
    printf("Enter the number of rotations Gokul: ");
    cin>>t;
    leftrot(a,n,t);cout<<endl;
    rightrot(a,n,t);
}