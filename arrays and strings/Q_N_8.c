//WAP to arrange characters in a word in alphabetical order.
#include <stdio.h>
#include <string.h>
void sortWordAlphabetically(char word[]) {
 int length = strlen(word);
 for (int i = 0; i < length - 1; i++) {
 int minIndex = i;
 for (int j = i + 1; j < length; j++) {
 if (word[j] < word[minIndex]) {
 minIndex = j;
 }
 }
 if (minIndex != i) {
 char temp = word[i];
 word[i] = word[minIndex];
 word[minIndex] = temp;
 }
 }
}
int main() {
 char word[100];
 printf("Enter a word: ");
 scanf("%s", word);
 sortWordAlphabetically(word);
 printf("Word in alphabetical order: %s\n", word);
 return 0;
}