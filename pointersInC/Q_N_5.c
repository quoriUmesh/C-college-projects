//WAP to search an element iin an array using pointer.

#include<stdio.h>
void main(){
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]), a;
    int *p1=arr;
    int  *p2=a;
    printf("Enter an element:");
    scanf("%d",&p2);
    int count =0;
    
    for(int i=0; i<size; i++){
      if(*p1==*p2){
        count++;
      } 
      *p1++;

    }

    if(count>0){
        printf("The element %d is present in the array.", p2);
    }
    else{
        printf("The element %d is not present in the array.", p2);
    }
}