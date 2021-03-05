#include <stdio.h>


int main(void)
{
    int current = 0;
    char first, currentchar, lastname[20];

    printf("Enter first and last name: ");
    first = getchar();
    while (getchar() != ' ');

        while ((currentchar = getchar()) != '\n' && currentchar != ' ')
            lastname[current++] = currentchar;

        printf("You entered the name: ");
        for (int i = 0; i < current; i++)
            printf("%c", lastname[i]);
        printf(", %c.", first);

    return 0;
}