#include<stdio.h>
#include<math.h>

double factorial(int n){
    if(n==0 || n==1){
       return 1;
       
    }
    else{
        return (n * factorial(n-1));
    }

int main(){
    int n;
    double sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){
        sum = sum + (pow(i,2)/factorial(i));
    }
    printf("THe sum of series is: %f\n",sum);
    
 return 0;   
}