#include <stdio.h>
#define CONVERSION_ADDEND 12

int main(void)
{
    int hours, minute, e_hours = 0;
    char indicator;

    printf("Enter the 12-hour time: ");
    scanf("%d : %d ", &hours, &minute);
    indicator = getchar();

    if(indicator == 'P') {
        (hours != 12) ? (e_hours = hours + CONVERSION_ADDEND) : (e_hours = 12);
    }
    if(indicator == 'A' && hours != 12) {
        e_hours = hours;
    }

    printf("Equivalent 24-hour time: %d:%d", e_hours, minute);

    return 0;
}
