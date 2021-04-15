#include<stdio.h>
#include<ctype.h>

#define MAX 100

int main(void)
{

    char sentence[MAX];
    char ch, *p = sentence, *q;

    printf("Enter a sentence: ");

    while ((ch = toupper(getchar())) != '\n' & p < sentence + MAX)
    {
        if (isalpha(ch))
        *p++ = ch;
    }
    p--;

    for (q = sentence; q < p; q++, p--){
        if (*p != *q)
        {
            printf("Not a palindrome\n");
            return 0;
        }
    }
    printf("Palindrome: ");
    return 0;
}