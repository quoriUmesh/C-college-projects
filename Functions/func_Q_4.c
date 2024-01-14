/*WAP the function named fact() and use it to calculate the permutation and combination
*/

#include<stdio.h>

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int combination(int n, int r){
   int combination = fact(n)/(fact(r)*fact(n-r));
    return combination;
}
int permutation(int n, int r){
    int permutation = fact(n)/fact(n-r);
    return permutation;
}


int main(){
    int a, b;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("\nEnter 2nd number:");
    scanf("%d",&b);
     int resultOfCombination =combination(a,b);
    int resultOfPermutation = permutation(a,b);
    printf("Permutation = %d\nCombination = %d",resultOfPermutation, resultOfCombination);

    return 0;
}