#include<stdio.h>

int main()
{
    char name[50];
    int roll_no;
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your roll number: ");
    scanf("%d", &roll_no);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\nYour name is %s\n", name);
    printf("Your roll number is %d\n", roll_no);
    printf("Your age is %d\n", age);

    return 0;
}