include<iostream>
#include<string.h>
char *Duplicate(char str[], int n)
{
   int k= 0;   
   for (int i=0; i<n; i++) { int j;   
    for (j=0; j<i; j++) 
    { 
       if (str[i] == str[j])
           break;
     }
     if (j == i)
        str[k++] = str[i];
   }
   return str;
}