#include <stdio.h>

int main( ){
    int m,d,y;

    printf("Enter a date(mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m, &d, &y);

    printf("You entered the date %d%d%d", m, d, y);
}