//WAP to print all unique elements in an array.
#include<stdio.h>

int main(){

    int arr[] = {5,2,7,8,5,7,9,2};
    int arrLength = sizeof(arr)/sizeof(arr[0]);
    printf("%d", arrLength);

     for(int i=0; i<arrLength; i++){
        int count= 1;
        for(j=i+1; j<arrLength; j++){
            if(arr[i]==arr[j]){
                arr[i]=0
            }
        }
     }
     
    return 0;
}