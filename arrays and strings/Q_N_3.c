//WAP to find largest and smallest element in the array.
#include<stdio.h>

int main(){
    int arr[]= {5,10,15,20,6,19};
    int minValue=100, maxValue=0, arlength = sizeof(arr)/sizeof(arr[0]);
     for(int i=0; i<arlength; i++){
        if(arr[i]>maxValue){
            maxValue = arr[i];
        }
        if(arr[i]<minValue){
            minValue = arr[i];
        }
     }
     printf("\nThe max value: %d \nThe min value: %d", maxValue,minValue);


    return 0;
}