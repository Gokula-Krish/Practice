#include<iostream>
using namespace std;
int main()
{
    int n;int *ar;ar=(int*)malloc(n*sizeof(int));
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }int m=0;
    for(int i=0;i<n;i++)
    {
        if(ar[m]<ar[i])
        {
            m=i;
        }
    }printf("Peak element is located at %d",m);
}