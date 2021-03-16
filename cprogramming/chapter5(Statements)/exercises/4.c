#include <stdio.h>

int main() {
    float amount, tax;
    printf("Enter your amount: ");
    scanf("%f", &amount);

    if (amount <= 750){
        tax = amount * 0.01;
        printf("Your tax is: $%f", tax);
    } else if (amount>750 && amount<=2250){
        tax = 7.5 + amount * 0.02;
        printf("Your tax is: $%f", tax);
    }else if (amount>2250 && amount<=3750){
        tax = 37.50 + amount * 0.03;
        printf("Your tax is: $%f", tax);
    }else if (amount>3750 && amount<=5250){
        tax = 82.50 + amount * 0.04;
        printf("Your tax is: $%f", tax);
    }else if (amount>5250 && amount<=7000){
        tax = 142.50 + amount * 0.05;
        printf("Your tax is: $%f", tax);
    } else{
        tax= 230.00 + amount * 0.06;
        printf("Your tax is: $%f", tax);
    }
}