#include <stdio.h>

int main() {
    int t1, t2;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &t1, &t2);
    if (t1 == 13) {
        printf("Equivalent 12-hour time: %d:%d PM", 1, t2);
    } else if (t1 == 14) {
        printf("Equivalent 12-hour time: %d:%d PM", 2, t2);
    } else if (t1 == 15) {
        printf("Equivalent 12-hour time: %d:%d PM", 3, t2);
    } else if (t1 == 16) {
        printf("Equivalent 12-hour time: %d:%d PM", 4, t2);
    } else if (t1 == 17) {
        printf("Equivalent 12-hour time: %d:%d PM", 5, t2);
    } else if (t1 == 18) {
        printf("Equivalent 12-hour time: %d:%d PM", 6, t2);
    } else if (t1 == 19) {
        printf("Equivalent 12-hour time: %d:%d PM", 7, t2);
    } else if (t1 == 20) {
        printf("Equivalent 12-hour time: %d:%d PM", 8, t2);
    } else if (t1 == 21) {
        printf("Equivalent 12-hour time: %d:%d PM", 9, t2);
    } else if (t1 == 22) {
        printf("Equivalent 12-hour time: %d:%d PM", 10, t2);
    } else if (t1 == 23) {
        printf("Equivalent 12-hour time: %d:%d PM", 11, t2);
    } else if (t1 == 00) {
        printf("Equivalent 12-hour time: %d:%d PM", 00, t2);
    } else{
        printf("Equivalent 12-hour time: %d:%d AM", t1, t2);
    }
}