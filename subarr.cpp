#include<bits/stdc++.h>
using namespace std;
void subarray(int a[],int n,int s)
{   vector<int> v;int sum=0;int t=0;int x=0;
    for(int i=0;i<n && t==0;i++)
    {
        x=i+1;
        sum=a[i];v.push_back(x);
        for(int j=i+1;j<n && t==0;j++)
        {  v.push_back(j+1);
           sum+=a[j];       
           if(sum==s)
           {  
               t=1;
           }
        }
    }
    
    cout<<"sum is "<<sum<<endl;int n1=v.size();
    cout<<"Sub array sum "<<s<<" is acheived by adding elements from position "<<v[x-1]<<" to "<<v[n1-1];
}
int main()
{
    int n;int *a=new int[n];
    printf("Enter no of elements: ");cin>>n;
    for(int i=0;i<n;i++)
    {cin>>a[i];}
    printf("Enter the element: ");int s;cin>>s;
    subarray(a,n,s);
}