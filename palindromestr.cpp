#include<iostream>
#include<string.h>
int isPalindrome(char S[])
{
    // Your code goes here
    int l=0;
    int h=strlen(S)-1;
    while(l<h)
    {
        if(S[l++]!=S[h--])
        {
            return 0;
        }
    }return 1;
}
int main()
{
    char s[900];
    printf("Enter a string: ");
    scanf("%s",s);
    printf("%d ==>>'0' not palindrome OR '1' palindrome",isPalindrome(s));
}