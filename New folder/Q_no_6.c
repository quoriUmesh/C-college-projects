/*Q 6. Wite an program to check if the given number is armstrong i.e. sum of cube
of individual numbers is equal to the number itself. example 153 is armstrong
number. 1 + 125 + 27 = 153
*/
#include<stdio.h>
#include<math.h>

int main(){

    int n, sum = 0;
    float  remainder;
    printf("PLease enter a three digit number\n");
    scanf("%d",&n);
    int original = n;

    while(remainder != 0){
        remainder = n%10;
        sum = pow(remainder,3) + sum;
        n=n/10;
    }
    if(sum==original){
        printf("The given number is armstrong!");
    }
    else{
        printf("The given number is not armstrong!");
    }
    return 0;

}