//WAP  read string and check for palindrome without using string related functions.

#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(char str[]) {
 int length = 0;
 while (str[length] != '\0') {
 length++;
 }
 int i, j;
 for (i = 0, j = length - 1; i < j; i++, j--) {
 if (str[i] != str[j]) {
 return false;
 }
 }
 return true;
}
int main() {
 char str[100];
 printf("Enter a string: ");
 scanf("%s", str);
 if (isPalindrome(str)) {
 printf("The string is a palindrome.\n");
 } else {
 printf("The string is not a palindrome.\n");
 }
 return 0;
}