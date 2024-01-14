#include<stdio.h>

   struct rectangle{
    float length;  
    float breadth;  
    float perimeter;  
    float area;  
   }r1;
   
int main(){
    
    struct rectangle r1;

    printf("Enter length of the rectangle:\t");
    scanf("%f",&r1.length);
    
    printf("Enter breadth of the rectangle:\t");
    scanf("%f",&r1.breadth);

    r1.perimeter = (r1.length + r1.breadth)*2;
    r1.area = r1.length*r1.breadth;

    printf("The perimeter of  rectangle is: %.2f m.\n", r1.perimeter);
    printf("The area of rectangle is: %.2f sq. m.\n", r1.area);

    return 0;
   }

