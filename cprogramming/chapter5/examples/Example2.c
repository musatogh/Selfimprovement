#include <stdio.h>

int main(){
    int grade;
    printf("Enter the grade: ");
    scanf("%d", &grade);

    switch (grade) {
        case 4: printf("Excellent");
                break;
        case 3: printf("Good");
                break;
        case 2: printf("Averege");
                break;
        case 1: printf("Poor");
                break;
        case 0: printf("Failing");
                break;
        default: printf("Illegal grade");
                 break;
    }
}