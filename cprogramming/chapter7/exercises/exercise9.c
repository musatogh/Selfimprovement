#include <stdio.h>

int main() {

    float enter, total = 0;
    char ch;

    printf("Enter an expression: ");
    scanf("%f", &total);

    while ((ch = getchar()) != '\n'){
        scanf("%f", &enter);

        switch (ch) {

            case '+':
                total += enter;
                break;
            case '-':
                total -= enter;
                break;
            case '*':
                total *= enter;
                break;
            case '/':
                total /= enter;
        }
    }printf("Value of expression: %.2f", total);

}