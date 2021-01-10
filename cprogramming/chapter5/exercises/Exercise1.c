#include <stdio.h>

int main() {
    int i;

    printf("Enter a number: ");
    scanf("%d", &i);

    if (i >= 0 && i < 10){
        printf("The number %d has 1 digits", i);
    } else if (i >= 10 && i < 100){
        printf("The number %d has 2 digits", i);
    } else if (i >= 100 && i < 1000){
        printf("The number %d has 3 digits", i);
    } else if (i >= 1000 && i < 10000){
        printf("The number %d has 4 digits", i);
    } else{
        printf("The number %d has more than 4 digits", i);
    }

}
