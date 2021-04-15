#include<stdio.h>

#define MAX 100

int main(void)
{
    char sentence[MAX];
    char ch, *p = sentence;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n' && p < sentence + MAX)
    *p++ = ch;

    p--;
    printf("Reversal is: ");

    while (p >= sentence)
        putchar(*p--);


        printf("\n");
        return 0;
}