#include<bits/stdc++.h>
using namespace std;
//Reverse words in a given string
string reverseWords(string S) 
{ 
    // code here 
    vector<string> t;string g="";int n=S.size();
    for(int i=0;i<n;i++)
    {
        if(S[i]=='.')
        {
            t.push_back(g);
            g="";
        }
        else
        {
            g+=S[i];
        }
    }
    t.push_back(g);
    string a;int n1=t.size();
    for(int j=n1-1;j>0;j--)
    {
        a+=t[j]+'.';
    }a+=t[0];
    return a;
} 
int main()
{
    string s;
    cin>>s;
    cout<<reverseWords(s);
}
