#include <stdio.h>

int min_number, max_number = 0, how_many_number, number[100];

void enter_values(void);
void print_solution(void);
int main(void)
{
    print_solution();
}

void enter_values(void)
{
    printf("How many values entered: ");
    scanf("%d", &how_many_number);
    printf("Enter the numbers: ");
    for (int i = 0; i < how_many_number; ++i){
            scanf("%d", &number[i]);
            if (number[i] > max_number)
                max_number = number[i];
            if (max_number > number[i])
                min_number = number[i];
    }
}

void print_solution(void)
{
    enter_values();
    printf("Minimum value is: %d\n", min_number);
    printf("Maximum value is: %d", max_number);
}