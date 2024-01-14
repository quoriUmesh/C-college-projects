/*Write a program to add multiply subtract and divide into integers using user defined functionwith return type.
*/
#include<stdio.h>

    double calculator(int a, char oper, int b){
            switch(oper){
                case '+':
                return a+b;
                break;
                case '-':
                return a-b;
                break; 
                 case '*':
                return a*b;
                break;
                 case '/':
                return a/b;
                break;
            }
    }

            int main(){
                int a, b;
                char operator;
                printf("Enter 1st number:");
                scanf("%d",&a);
                printf("\nEnter 2nd number:");
                scanf("%d",&b);
                printf("\nEnter opertator:");
                scanf("%s", operator);
                double result = calculator(a,operator,b);

                printf("\nThe result of calculation is: %f", result);
               return 0;       
            }
    