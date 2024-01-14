/*WAP to find greater and smaller number between two numbersby using function
*/

#include<stdio.h>

    int compareMax(int a, int b){
        if(a>b){
            printf("Max value is:");
            return a;
        }
        else{
            printf("Max value is:");
            return b;
     }
    }

    int compareMin(int a, int b){
        if(a<b){
           printf("Min value is:",b);
            return a;
        }
        else{
            printf("Min value is:");
            return b;
        }
    }

    void main(){
        int a, b, max, min;
        printf("Enter the 1st number:");
        scanf("%d",&a);
        printf("Enter the 2nd number:");
        scanf("%d",&b);

        max = compareMax(a,b);
        min = compareMin(a, b);

        printf("\n%d\n%d", max, min);
    }

