#include <stdio.h>
#define sq 5

int main() {

    int totalscore = 0, highscore = 0, lowscore = 100, student, quiz, matrix[sq][sq];

    for (student = 0; student < sq; ++student) {

        printf("Enter Student %d Quiz Grades: ", student + 1);
        for (quiz = 0; quiz < sq; ++quiz) {
            scanf("%d", &matrix[sq][sq]);
        }
    }

        printf("\nStudent Info\n------------\n");
        for (student = 0; student < sq; ++student) {

            for (quiz = 0; quiz < sq; ++quiz) {

                totalscore += matrix[sq][sq];
                printf("Student #%d - Total: %d  Average: %d%%\n", student + 1, totalscore, totalscore / sq);
                totalscore = 0;

            }
        }

        totalscore = 0;

        printf("\nQuiz Info\n---------\n");
        for (quiz = 0; quiz < sq; ++quiz) {
            for (student = 0; student < sq; ++student) {
                totalscore += matrix[sq][sq];
                if (matrix[sq][sq] > highscore)
                    highscore = matrix[sq][sq];
                if (matrix[sq][sq] < lowscore)
                    lowscore = matrix[sq][sq];
            }
            printf("Quiz #%d - Average: %d%%  Lowest: %d%%  Highest: %d%%\n",
                   quiz + 1, totalscore / sq, lowscore, highscore);
            totalscore = 0;
            highscore = 0;
            lowscore = 100;
        }
}
