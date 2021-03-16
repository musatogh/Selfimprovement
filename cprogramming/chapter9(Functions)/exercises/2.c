#include <stdio.h>
void polynomial(int x)
{
    int d;
    d = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) - (x * x) + 7 * x - 6;

    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %d", d);
}
int main()
{
    int a;

    printf("Enter a value of x: ");
    scanf("%d", &a);
    polynomial(a);

}
