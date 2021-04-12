#include<iostream>
#include<string.h>
int main()
{
  char s[700],s1[700],s2[700];
  printf("Enter the string: ");
  scanf("%s %s",s,s1);
  printf("strlen(s): %d\n",strlen(s));
  printf("strrev(s): %s\n",strrev(s));
  printf("strupr(s): %s\n",strupr(s));
  printf("strcat(s,s1): %s\n",strcat(s,s1));
  strcpy(s2,s);
  printf("strcpy(s2,s): %s\n",s2);
  printf("strcmp(s,s1): %d\n",strcmp(s,s1));
  printf("strlwr(s1): %s\n",strlwr(s1));
}