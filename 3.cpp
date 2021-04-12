#include<bits/stdc++.h>
using namespace std;
typedef map<char,int> m;
void Encoding(char* s1)
{
    int f[256]={0};
    for(int i=0;s1[i]!='\0';i++)
    {
        f[s1[i]]++;
    }
    for(int i=0;i<256;i++)
    {
        if(f[i]!=0)
        {
            if(f[i]>1)
            {cout<<char(i)<<f[i];}
            else
            {cout<<char(i);}
        }
    }
}
int main()
{
    m m1;
    char s[990];
    cout<<"Enter the string"<<endl;
    cin>>s;//scanf("%s",&s);
    Encoding(s);
}