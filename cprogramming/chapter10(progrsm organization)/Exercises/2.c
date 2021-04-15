#include <stdio.h>
#include <ctype.h>

void find_number(void);
void print_number(void);

int number = 0;
int cards[5][15] = {{13, 21, 9, 5, 17, 29, 19, 15, 1, 11, 3, 23, 25, 27, 7},
                    {6, 26, 30, 27, 15, 10, 7, 23, 2, 22, 11, 19, 3, 14, 18},
                    {30, 7, 21, 29, 5, 15, 12, 28, 13, 20, 22, 4, 6, 14, 23},
                    {14, 28, 10, 27, 15, 12, 9, 26, 30, 24, 29, 8, 11, 25, 13},
                    {27, 20, 28, 18, 30, 24, 17, 25, 22, 23, 19, 16, 29, 26, 21}};
char answer;

int main(void)
{
    print_number();
}

void find_number(void)
{
    for (int i = 0; i < 5; ++i) {
        printf("%d. Card: ", i + 1);
        for (int j = 0; j < 15; ++j) {
            printf(" %d", cards[i][j]);
        }
        printf("\nIs your number here?:");
        while ((answer = toupper(getchar())) != '\n') {
            if (answer == 'Y') {
                switch (i) {
                    case 0:
                        number += 1;
                        break;
                    case 1:
                        number += 2;
                        break;
                    case 2:
                        number += 4;
                        break;
                    case 3:
                        number += 8;
                        break;
                    case 4:
                        number += 16;
                        break;
                }
            }
        }
    }
}
void print_number(void)
{
    find_number();
    printf("Your number is %d", number);
}