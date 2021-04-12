//JUGGLING ALGORITHM
#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0){
        return a;
    }
    else{
        return(gcd(b,a%b));
    }
}
void rotate(int A[],int n,int nn)
{  
    int g=gcd(nn,n),t=0,k=0;
    for(int i=0;i<g;i++)
    {
        t=A[i];
        int j=i;
        while(1)
        {
            k=j+nn;
            if(k>=n){k=k-n;}
            if(k==i){break;}
            A[j]=A[k];
            j=k;
        }A[j]=t;
    }
    for(int j=0;j<n;j++)
    cout<<A[j]<<" ";
}
int main()
{
    int n,nn;
    int *a=new int[n];
    cout<<"Enter the number of elements and number of rotations"<<endl;
    cin>>n>>nn;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    rotate(a,n,nn);cout<<endl;
}
