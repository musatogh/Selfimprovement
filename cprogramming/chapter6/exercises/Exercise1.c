#include <stdio.h>

int main() {
    int number, largestnumber = 0;


    for (int i = 0; i < 100; ++i) {
        printf("Enter the number: ");
        scanf("%d", &number);
        if (number >= largestnumber) {
            largestnumber = number;
        }
        else if (number <= 0){
            break;
        }
    } printf("The largest number is: %d", largestnumber);
}