//WAP to enter cartesian co-ordinate points and diaplay the distance between them.
#include<stdio.h>
#include<math.h>

struct points{
    double x1;
    double y1;
    double x2;
    double y2;
};

double distanceBetweenPoints(double x1,double y1, double x2,double y2){
    double distance =sqrt(pow((x2-x1),2)*+pow((y2-y1),2));
    printf("%lf", distance);

    return distance;
}

int main(){

    struct points p[1];

    int i=1;
        printf("Enter (x1,y1):");
        scanf("%lf %lf",&p[i].x1,&p[i].y1);
        printf("Enter (x2,y2):");
        scanf("%lf %lf",&p[i].x2,&p[i].y2);
    

    printf("The distance between two points is");
    distanceBetweenPoints(p[i].x1,p[i].y1,p[i].x2,p[i].y2);

    
    return 0;
}