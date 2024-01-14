//WAP to count toatal numbers of duplicate elements in an array.
#include<stdio.h>

int main(){

    int arr[] = {1,1,1,1,1,1,1,2,2,3,1,1};
    int arrLength = sizeof(arr)/sizeof(arr[0]) , count = 0;
    printf("%d", arrLength);

     for(int i=0; i<arrLength; i++){
            for(int j=i+1; j<arrLength; j++){
                if(arr[i]==arr[j]){
                    count++;
                    if(count=arrLength){
                        break;
                    }
                }
            }
     }
     printf("The numeber of duplicate elements in the array is: %d",count);

    return 0;
}