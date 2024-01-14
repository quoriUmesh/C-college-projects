//WAP to separate odd and even numbers present in an array.
#include<stdio.h>

void oddEvenSeparator(int arr[],int size){
   int odd[size], even[size];
   int oddCount=0, evenCount=0;

   for(int i=0; i<size; i++){
     if(arr[i]%2==0){
        even[evenCount]= arr[i];
        evenCount++;
     }

     else{
        odd[oddCount] = arr[i];
        oddCount++;
     }
   }

     printf("The odd numbers array:\n");
     for(int i=0; i<oddCount; i++){
        printf("%d ",odd[i]);
     }
     printf("\nThe even numbers array:\n");
     for(int i=0; i<evenCount; i++){
        printf("%d ",even[i]);
     }

   
}

int main(){
    int arrs[]={1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arrs)/sizeof(arrs[0]);
    oddEvenSeparator(arrs, size);
    return 0;
}