#include<iostream>
#include<math.h>
using namespace std;
int solve(int *ar,int n)
{
    int sum=0;int d=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            d=(ar[j]-ar[i]);
            if(abs(d)>1)
            {
                sum+=d;
            }
        }
    }return sum;
}
int main()
{
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d",&t);
    while(t--)
    {   int n;
        cin>>n;int *ar;ar=(int*)malloc(n*sizeof(int));
        for(int i=0;i<n;i++)
        {
            scanf("%d",&ar[i]);
        }printf("%d\n",solve(ar,n));
    }
}