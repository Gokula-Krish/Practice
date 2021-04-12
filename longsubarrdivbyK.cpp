#include<iostream>
using namespace std;
int subardivbyK(int *a,int n,int k)
{   int ahf[300];
    int sum=0;int c=0;
    for(int i=0;i<n;i++)
    {  
        for(int j=i+1;j<n;j++)
        {
            sum=a[i]+a[j];cout<<sum<<endl;
            if(sum%k==0)
            {
                c++;
            }
        }
    }
        return c;
    
}
bool K(int arr[], int n, int K)
{
    // Creating and filling prefix sum array 
    int prefix_sum[n];
    prefix_sum[0] = arr[0];
    for (int i = 1; i < n; i++)
        prefix_sum[i] =  prefix_sum[i - 1] + arr[i];
  
    // return false if total_sum is not 
    // divisible by K   
    int total_sum = prefix_sum[n-1];
    if (total_sum % K != 0)
        return false;
  
    // a temporary variable to check
    // there are exactly K partitions
    int temp = 0;
      
    int pos = -1;
    for (int i = 0; i < n; i++) 
    {        
        // find suitable i for which first
        // partition have the required sum
        // and then find next partition and so on
        if (prefix_sum[i] - (pos == -1 ? 0 :
            prefix_sum[pos]) == total_sum / K) 
        {
            pos = i;
            temp++;
        }
          
        // if it becomes greater than 
        // required sum break out
        else if (prefix_sum[i] - prefix_sum[pos] > 
                total_sum / K)
            break;
    }
  
    // check if temp has reached to K
    return (temp == K);
}
int main()
{
    int n,k;int *ar;ar=(int*)malloc(n*sizeof(n));
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }printf("Enter the value of K: ");scanf("%d",&k);
    printf("%d",K(ar,n,k));
}