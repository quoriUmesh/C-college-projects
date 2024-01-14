//Write a program to search element in array.

#include<stdio.h>


int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n, count=0,arlength= sizeof(arr) / sizeof(arr[0]);

    printf("Please enter a value: ");
    scanf("%d", &n);
    printf("Array length is : %d", arlength);


    for(int i=0; i<arlength; i++){
        if(arr[i]==n){
            count = count+1;
        }
    }
    
    if(count>0){
        printf("\nThe given integer value %d is an element of the array",n);
    }
    else{
        printf("\nThe given integer value %d is not an element of the array",n);
    }

    return 0;
}