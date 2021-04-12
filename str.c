#include <stdio.h>
#include<string.h>
int main()
{
  char s[700];
  printf("Enter the string: ");
  scanf("%s ",s);
  printf("%d",strlen(s));
  printf("%s",strupr(s));
}