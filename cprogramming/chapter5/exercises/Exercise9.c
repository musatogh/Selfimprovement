#include <stdio.h>

int main() {
    int m1, d1, y1, m2, d2, y2;
    printf("Enter the first date mm/dd/yy: ");
    scanf("%d/%d/%d: ", &m1, &d1, &y1);
    printf("Enter the second date mm/dd/yy: ");
    scanf("%d/%d/%d: ", &m2, &d2, &y2);

    if (y1 < y2){
        printf("%d/%d/%d earlier than %d/%d/%d", m1, d1, y1, m2, d2, y2);
    }else if (m1 < m2 && y1 < y2){
        printf("%d/%d/%d earlier than %d/%d/%d", m1, d1, y1, m2, d2, y2);
    } else if (d1 < d2 && m1 < m2 && y1 < y2){
        printf("%d/%d/%d earlier than %d/%d/%d", m1, d1, y1, m2, d2, y2);
    }else{
        printf("%d/%d/%d earlier than %d/%d/%d", m2, d2, y2, m1, d1, y1);
    }

}