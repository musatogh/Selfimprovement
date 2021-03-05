#include <stdio.h>

int main(void) {

    int lettercount = 0,lenword = 0, current, start;
     char letters[1000], letter, terminating;

     printf("Enter a sentence: ");
    for (current = 0; ((letter = getchar()) != '\n') && (current < 1000); ++current) {

        switch (letter) {

            case '.': case '?': case '!': terminating = letter;
            break;
            default: letters[current] = letter; lettercount++;

        }
    }

    printf("Reversal of words in sentence: ");

    for (current = lettercount - 1; current >= 0; current--) {

        if((letters[current] == ' ') || (current == 0))
        {
            if(current == 0)
                current--;

            for(start = current + 1; start <= current + lenword+ 1; start++)
                printf("%c", letters[start]);
            lenword = 0;
        }
        else
            lenword++;
    }

    printf("%c", terminating);

    return 0;

}