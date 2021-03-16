#include <stdio.h>

int main() {
    int itnum, unipri, /*purdat->>*/ m,d,y;

    printf("Enter item number: ");
    scanf("%d", &itnum);

    printf("Enter unit price: ");
    scanf("%d", &unipri);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m, &d, &y);

    printf("Item, Unit Price, Purchase date\n%d       %d        %d/%d/%d ", itnum, unipri, m, d, y);
}
