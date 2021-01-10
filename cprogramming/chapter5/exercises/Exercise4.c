#include <stdio.h>

int main() {
    float ws;
    printf("Enter a wind speed: ");
    scanf("%f", &ws);

    if (ws<1){
        printf("Calm");
    } else if (ws>1 && ws<3){
        printf("Light air");
    }else if (ws>4 && ws<27){
        printf("Breeze");
    }else if (ws>28 && ws<47){
        printf("Gale");
    }else if (ws>48 && ws<63){
        printf("Storm");
    } else{
        printf("Hurricane");
    }
    return 0;
}
