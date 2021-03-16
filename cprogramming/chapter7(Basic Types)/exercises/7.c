#include <stdio.h>

int main() {

    char ch;
    int lenvowel = 0;

    printf("Enter the sentence: ");

    while ((ch = getchar()) != '\n'){
        switch (ch) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                lenvowel++;
                break;
        }

    }printf("Your sentence contains %d vowels", lenvowel);

}