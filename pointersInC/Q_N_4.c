//WAP to reverse an array using pointer.

#include<stdio.h>

void main(){
    int arr[5] = {1,2,3,4,5};
    int brr[5];
    int *p = arr;
    for(int i=4; i>=0; i--){
        brr[i]=*p;
        p++;

    }
    for(int i=0; i<5; i++){
      printf("%d ",brr[i]);

    }
}