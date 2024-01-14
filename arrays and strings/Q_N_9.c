//WAP to find decimal equivalent of given octal no.
#include <stdio.h>
int octalToDecimal(int octalNumber) {
 int decimalNumber = 0;
 int base = 1;
 while (octalNumber > 0) {
 int digit = octalNumber % 10;
 decimalNumber += digit * base;
 base *= 8;
 octalNumber /= 10;
 }
 return decimalNumber;
}
int main() {
 int octalNumber;
 printf("Enter an octal number: ");
 scanf("%d", &octalNumber);
 int decimalEquivalent = octalToDecimal(octalNumber);
 printf("Decimal equivalent: %d\n", decimalEquivalent);
 return 0;
}