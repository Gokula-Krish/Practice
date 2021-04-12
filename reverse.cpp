#include<iostream>
using namespace std;
void rev(int ar[],int start,int end)
{
  while(start<end)
  {
     int t=ar[start];
     ar[start]=ar[end];
     ar[end]=t;
     start++;
     end--;
  }printf("Reversed array is: ");
}
void print(int ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }printf("\n");
}
int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int *ar;
    ar=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    print(ar,n);
    rev(ar,0,n-1);
    print(ar,n);
}