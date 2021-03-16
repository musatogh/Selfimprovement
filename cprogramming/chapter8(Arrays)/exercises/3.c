#include <stdio.h>
#define LM 100

int main() {

    char ch, message [LM] = {0};
    
    printf("Ente message: ");

    for (int i = 0; i < LM && (ch = getchar()) != '\n'; ++i) {

        message[i] = ch;
        
    }
    
    for (int i = 0; i < LM; ++i) {

        switch (message[i]) {
            case 'A':
                putchar('4');
                break;
            case 'B':
                putchar('8');
                break;
            case 'E':
                putchar('3');
                break;
            case 'I':
                putchar('1');
                break;
            case 'O':
                putchar('0');
                break;
            case 'S':
                putchar('5');
                break;
            case 0:
                printf("!!!!!!!!!!!!\n");
                return 0;
            default:
                putchar(message[i]);
                break;
        }
    }
}