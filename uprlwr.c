#include<stdio.h>
#include<string.h>
void Upper(char *s)
{
    int n=sizeof(s)/sizeof(s[0]);
    for(int i=0;i<n;i++)
    {
        s[i]=s[i]+32;
        printf("%c",s[i]);
    }
}
void Lower(char *s)
{
    int n=sizeof(s)/sizeof(s[0]);
    for(int i=0;i<n;i++)
    {
        s[i]=s[i]-32;
        printf("%c",s[i]);
    }
}
int main()
{
    char s1[100],s2[100];
    printf("Enter two strings:(one in lower other in uppercase): ");
    scanf("%s %s",s1,s2);
    Lower(s1);printf("\n");
    Upper(s2);
}