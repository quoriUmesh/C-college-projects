//Write a program to find the biggest number amongst the three using pointers.

#include<stdio.h>

int largestNum(int x,int y, int z){
    int *a,*b,*c;
    a=&x;
    b=&y;
    c=&z;

    if(*a>*b && *a>*c){
        return *a;
    }
    else if(*b>*c && *b>*a){
        return *b;
    }
    else{
    
        return *c;
    }
}

int main(){

    int a, b, c;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);

    int largest = largestNum(a,b,c);
    printf("The largest among the three numbers is: %d",largest);
    
    return 0;
}