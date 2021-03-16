#include <stdio.h>

int main() {

    char ch;
    int value = 0;

    int letter[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,
                      1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    printf("Enter the word: ");

    while((ch = getchar()) != '\n')
        value += letter[ch - 'A'];

    printf("Value: %d", value);

    return 0;

}