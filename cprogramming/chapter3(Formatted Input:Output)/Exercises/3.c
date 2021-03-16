#include <stdio.h>

int main() {
  int phonenumber1,  phonenumber2,  phonenumber3;

  printf("Enter phone number[(xxx) xxx-xxxx]: ");
  scanf("(%d) %d-%d", &phonenumber1, &phonenumber2, &phonenumber3);

  printf("You entered %d.%d.%d", phonenumber1, phonenumber2, phonenumber3);
}