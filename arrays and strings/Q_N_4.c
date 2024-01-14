//WAP for the deletion of an element from the specied location from array.
#include<stdio.h>

int main(){
    int sizeOfArray, pos;
    printf("\nEnter the size of array: ");
    scanf("%d", &sizeOfArray);
    printf("Size of your array is: %d",sizeOfArray);

        //To initialize a array;
    int arr[sizeOfArray];
    printf("\nPlease enter the elements of array:");

    for(int i=0; i<sizeOfArray; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nThe elements of your arrays are:\n");
     for(int i=0; i<sizeOfArray; i++){
        printf("%d  ", arr[i]);
    }

        //To delete a element
    printf("\nPlease enter the position of the element you want to delete:");
    scanf("%d",&pos);

    while(pos>sizeOfArray || pos<0){
        printf("\nInvalid position of array.PLease enter the valid position:  ");
        scanf("%d",&pos);
    }
   
      for(int i=pos-1; i<sizeOfArray-1; i++){
        arr[i]=arr[i+1];
    }

    sizeOfArray--;   //This decrease the size of array

    //To print the array after deletion
    printf("\nAfter deleting the %dth element in the array your new array is:",%d);
    for(int i=0; i<sizeOfArray; i++){
        printf("%d  ", arr[i]);
    }
  
    return 0;
}