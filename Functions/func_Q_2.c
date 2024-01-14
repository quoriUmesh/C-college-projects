/*WAP to calculate the sum of first 50 natural numbers using recursion.
*/
#include<stdio.h>

   int naturalNumberSum(int n){
    if(n!=0){
        int sum = n+ naturalNumberSum(n-1);
         return sum;
    }
    else{
        return 0;
    }
   }

            int main(){
                int n;
                printf("Enter the value of n:");
                scanf("%d",&n);               
                int sum = naturalNumberSum(n);
                printf("sum: %d",sum);
               return 0;       
            }
    