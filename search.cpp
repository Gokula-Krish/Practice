#include<bits/stdc++.h>
using namespace std;
int bsearch(int a[],int e,int  l,int r)
{ int m=(l+r)/2;
  if(e<a[m])
  {return bsearch(a,e,0,m);}
  else if(e>a[m])
  {return bsearch(a,e,m+1,r);}
  else{return m+1;}
}
int lsearch(int a[],int e,int n)
{ 
    for(int i=0;i<n;i++)
    {
        if(e==a[i])
        {
            return (i+1);
        }
    }
    return -1;
}
int main()
{
  int n;
  printf("Enter the number of elements: ");
  cin>>n;
  int *a=new int[n];
  for(int i=0;i<n;i++){scanf("%d",&a[i]);}
  int e;
  cout<<"Enter the element to be searched"<<endl;
  cin>>e;
  cout<<"Binary Search= "<<bsearch(a,e,0,n)<<endl;
  printf("Linear search= %d",lsearch(a,e,n));
 }
