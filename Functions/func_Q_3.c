/*WAP to swap two integers using call by value and call by reference methods of passing 
arguments to the function.*/

#include<stdio.h>
    void swap(int a, int b){
        int temp = a;
        a=b;
        b=temp;
        printf("\nSwapping by call by value function\nAfter swapping the value a = %d, b = %d",a,b);
    }
   
    
    

            int main(){
                int a,b;
                printf("Enter the value of a:");
                scanf("%d",&a);
                printf("\nEnter the value of b:");
                scanf("%d",&b);
                swap(a,b);
                
               return 0;       
            }
    