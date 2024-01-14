/*Wite an prohgram to check if the given year is the leap year. A year is
leap year if it is divisible by 4 but in case of century itb must also be 
divisible by 400
*/
#include<stdio.h>
#include<math.h>

int main(){
    int year, remainder, remainder2;
    printf("Enter a year:");
    scanf("%d",&year);
    remainder = year%100;
    if(remainder==0){
       remainder2 = year%400;
       
    }
    else{
        remainder2 = year%4;
    }
    if(remainder2==0){
        printf("The year %d is leap year",year);
       }
       else{
        printf("The year %d is not leap year",year);
       }

    
 return 0;   
}