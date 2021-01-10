#include <stdio.h>

int main() {
    int grade;

    printf("Enter your number grade: ");
    scanf("%d", &grade);

    if (grade >= 90 && grade < 100){
        printf("Your letter grade is A");
    } else if (grade >= 80 && grade < 90){
        printf("Your letter grade is B");
    }else if (grade >= 70 && grade < 80){
        printf("Your letter grade is C");
    }else if (grade >= 60 && grade < 70){
        printf("Your letter grade is D");
    }else if (grade >= 0 && grade < 60){
        printf("Your letter grade is F");
    }
}
