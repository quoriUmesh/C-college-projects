/*Wite an prohgram to claculate the sum of the following series, if n and x are given 
by the user;
y = x + x^2 +x^3+.....+x^n
*/
#include<stdio.h>
#include<math.h>

int main(){
    int x, n;
    float y =0;
    printf("To calculate the sum of the following series;\ny = x + x^2 +x^3+.....+x^n\n");

    printf("Please enter the value of x:");
    scanf("%d",&x);
    
    printf("Please enter the value of n:");    
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        y = pow(x,i) + y;
    }
    printf("Sum of the series = %f",y);
    
 return 0;   
}