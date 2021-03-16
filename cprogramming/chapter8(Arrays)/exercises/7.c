#include <stdio.h>

int main() {

    int current = 0;
    char ch, number[15];

    printf("Enter phone number: ");
    while ((ch = getchar()) != '\n'){
        switch(ch) {
            case 'A': case 'B': case 'C': number[current++] = '2'; break;
            case 'D': case 'E': case 'F': number[current++] = '3'; break;
            case 'G': case 'H': case 'I': number[current++] = '4'; break;
            case 'J': case 'K': case 'L': number[current++] = '5'; break;
            case 'M': case 'N': case 'O': number[current++] = '6'; break;
            case 'P': case 'R': case 'S': number[current++] = '7'; break;
            case 'T': case 'U': case 'V': number[current++] = '8'; break;
            case 'W': case 'X': case 'Y': number[current++] = '9'; break;
            default: number[current++] = ch; break;
        }
    }

    printf("In Numeric Form: ");
    for(current = 0; current < 15; current++)
        putchar(number[current]);

    return 0;
}

