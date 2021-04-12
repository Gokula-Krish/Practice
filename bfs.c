#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
  char s[700];
  scanf("%s ",s);
  printf("%d",strlen(s));
  printf("%s",strupr(s));
}