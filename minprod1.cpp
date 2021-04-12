//Minimum steps to make product equal to one
#include<iostream>
using namespace std;
int solve(int *ar,int n)
{
    int step=0;int zero=0,pos=0,neg=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]==0)
        {
           zero++;
        }
        else if(ar[i]<0)
        {   neg++;
            step+=-(1+ar[i]);
        }
        else if(ar[i]>0)
        {pos++;
         step+=(ar[i]-1);
        }
    }
    if (neg%2==0) {
        step+=zero;
    }
    else if(zero>0) {
        step+=zero;
     }
    else{
        step+=2;
    }
    
    return step;
}
int main()
{
    int n;
    int *ar;
    ar=(int*)malloc(n*sizeof(int));
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("%d",solve(ar,n));
}