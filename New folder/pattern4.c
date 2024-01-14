#include<stdio.h>

int main(){
    int rows=5;
    for(int i=0; i<=rows; i++){  //for printing rows 
        for(int j=1; j<=rows-i; j++){   //For spaces
            printf(" ");
            }
        for(int k=1; k<=2*i-1; k++){  //For printing * 
            printf("*");
        } 
        printf("\n");       
    }   
     return 0;
}