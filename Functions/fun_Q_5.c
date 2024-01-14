/*Write a recursive function to generate the fibonacci series upto N terms
*/

#include<stdio.h>

     int fibo(int n){
        if(n==0){
            return 0;
        }
        else if(n==1){
            return 1;
        }
        else{
            return (fibo(n-1)+fibo(n-2));
        }
     }

    void main(){
        int n;
        printf("Enter the value of n:");
        scanf("%d",&n);
        printf("The fibonacci series upto nth term are:");
        for(int i=0; i<=n; i++){
            int a= fibo(i);
            printf("%d  ",a);
        }
    }