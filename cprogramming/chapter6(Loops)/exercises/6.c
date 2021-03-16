#include <stdio.h>

int main(){

    int n;

    printf("Enter the n: ");
    scanf("%d", &n);
    printf("e = 1 ");

    for (int i = 1; i <= n; ++i){

        printf("+ 1/%d! ", i);

    }
}