//MARS EXPLORATION HACKERRANK
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    int n=s.size();int c=0;
    string s2="SOS";int d=0;
    for(int i=0;i<n;i=i+3)
    {
        string s1=s.substr(i,3);
        int j=0;
        while(j!=3)
        {
            if(s2[j]!=s1[j])
            {c++;
            }j++;
        }
    }
    cout<<c<<endl;
}