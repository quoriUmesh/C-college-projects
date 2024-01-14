//WAP to perform addition of all elements in array and display average value.

#include<stdio.h>

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,16};
    int sum = 0, arlength = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<arlength; i++){
      sum =  sum+arr[i];
    }
    printf("\nSum of the elements of the array is %d", sum);

    float average = sum/arlength;

    printf("\nThe average value of th integers in the array is %f",average);


    return 0;
}