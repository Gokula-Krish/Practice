#include<bits/stdc++.h>
using namespace std;
int main()
{   int s=0;
    int n;
    cin>>n;int t1=0,t2=1;int nex;
    for (int i = 0; i <= n; ++i) {
        cout<<t1<<" ";s+=t1;
        nex= t1 + t2;
        t1 = t2;
        t2 = nex;
    }cout<<s;
}