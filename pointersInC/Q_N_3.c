//WAP to copy one array to anotehr using pointers

#include<stdio.h>
void main(){
    int arr[5] = {1,2,3,4,5};
    int brr[5];
    int *p=arr;
    for(int i=0; i<5; i++){
        brr[i]=*p;
        p++;
    }
    for(int i=0; i<5; i++){
        printf("%d ",brr[i]);
    }
}