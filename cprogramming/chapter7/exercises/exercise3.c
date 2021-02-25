#include <stdio.h>

int main() {

    char ch;
    int a = 0;

    printf("Enter a world: ");
    while ((ch = getchar()) != '\n'){

        switch (ch) {

            case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
                a += 1;
                break;
            case 'D': case 'G':
                a += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                a += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                a += 4;
                break;
            case 'K':
                a += 5;
                break;
            case 'J': case 'X':
                a += 8;
                break;
            case 'Q': case 'Z':
                a += 10;
                break;

        }
    } printf("%d", a);

}