#include<bits/stdc++.h>
using namespace std;
string encode(string s)
{   string s1;
    int n = s.size();
    for (int i = 0; i < n; i++) { // Count occurrences of current character
        int count = 1;
        while (i < n - 1 && s[i] == s[i + 1]) {
            count++;
            i++;
        }
        string x=s[i]+std::to_string(count);
        s1+=x;cout<<s[i]<<count;
    }printf("\n");
    cout<<"Encoded string is "<<s1<<endl;
    return s1;
}
string decode(string s)
{int n=s.size();string s1;
    for(int i=0;i<n;i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
            s1+=s[i];cout<<s[i];
        }
        else
        {
            int j=0;int a=int(s[i])-'0';
            while(j<a-1)
            {
              s1+=s[i-1];j++;cout<<s[i-1];
            }
        }
    }printf("\n");cout<<"Decoded string is: "<<s<<" ==>"<<s1<<endl;
    return s1;
}
int main()
{
    string s;string s2;string s4;
    cin>>s;
    s4=encode(s);
    s2=decode(s);int k;
    printf("Enter the index: ");cin>>k;
    cout<<s2[k-1];
}