#include <stdio.h>

int main() {

    int n1, n2, a, b, c, d, e;
    printf("Enter a fraction: ");
    scanf("%d/%d", &n1, &n2);

    if (n2 % n1 == 0 && n1 < n2){

        a = n1 / n1;
        b = n2 / n1;
        printf("In lowest terms: %d/%d", a, b);

    } else if (n2 % n1 !=0 && n1 < n2){

        for (int i = 2; i <= n1; ++i) {

            if (n1 % i == 0 && n2 % i == 0){
                c = n1 / i;
                d = n2 / i;
            }
        } printf("In lowest terms: %d/%d\n", c,d);
    } else{

        e = n1 / n2;
        printf("%d", e);

    }
}