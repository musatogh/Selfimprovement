#include <stdio.h>

int main() {

    int num1, denom1, num2, denom2, result_num, result_denom;
    char sign;

    printf("Enter two fractions, seperated by sign: ");

    scanf("%d / %d ", &num1, &denom1);
    sign = getchar();
    scanf(" %d / %d", &num2, &denom2);

    printf("The ");

    switch(sign) {
        case '-':
            result_num = num1 * denom2 - num2 * denom1;
            result_denom = denom1 * denom2;
            printf("difference");
            break;
        case '*':
            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            printf("product");
            break;
        case '/':
            result_num = num1 * denom2;
            result_denom = denom1 * num2;
            printf("quotient");
            break;
        case '+':
        default:
            result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 * denom2;
            printf("sum");
            break;
    }

    printf(" is %d/%d\n", result_num, result_denom);

    return 0;

}