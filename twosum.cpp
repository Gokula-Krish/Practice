#include<bits/stdc++.h>
using namespace std;
void twoSum(int *nums,int n, int target) {
        int s[100];int k=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]==target) {
                s[k++]=i;
                s[k++]=j;
                break;}
            }
        }
        for(int i=0;i<k;i++)
        {
            printf("%d ",s[i]);
        }
}
int main()
{
    int n;
    printf("Enter the number of elements: ");
    cin>>n;int *ar;ar=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }printf("Enter the target elements: ");int t;
    cin>>t;
    twoSum(ar,n,t);
}