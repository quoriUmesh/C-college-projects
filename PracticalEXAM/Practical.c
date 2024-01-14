#include<stdio.h>

int main(){

    int size, temp;

    printf("PLease enter the size of array:\t");
    scanf("%d",&size);

    int arr[size];

    printf("Enter integer elements for array:\n");

    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<size; i++){

        for(int j=i+1; j<size; ++j){

            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("The second largest element in the array is: %d", arr[size-2]);

    return 0;
}