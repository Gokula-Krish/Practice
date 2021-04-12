#include<bits/stdc++.h>
using namespace std;
void brute(int ar[],int n)
{
    int k=0;
    int a[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ar[i]!=ar[j])
            {
                a[k++]=ar[j];
            }
            else{continue;}
        }
    }
    for(int i=0;i<k;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int ar[]={1,1,2,2,1,2,2,3,3,4,4,5,5,6,6};
    int n=sizeof(ar)/sizeof(ar[0]);
    cout<<"n is: "<<n<<endl;
    int j=0;
    int *t=new int[n];
    brute(ar,n);
}