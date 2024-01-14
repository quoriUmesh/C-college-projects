//Create a structure name student which consists of student id, name, marks of three subjects and total marks .
//WAP which takes input for 10 students and display result table. Also display students informationseparately
// who got highest total.

#include<stdio.h>

    struct student{
        int studentID;
        char name[50];
        float marks[3];
        float total;
    };

    int main(){
        int max=10;
        struct student s[max];
        for(int i=0; i<max; i++){

        printf("Enter the id of the student s%d: ",i);
        scanf("%d",&s[i].studentID);
          printf("Student id: %d\n", s[i].studentID);

        
        printf("Enter the name of the student s%d: ",i);
        scanf("%s",s[i].name);

        printf("Enter the marks of the student s%d in Math, Science and English: ",i);
        s[i].total=0;
        for(int j=0; j<3; j++){

            scanf("%f",&s[i].marks[j]);
            s[i].total+= s[i].marks[j];
        }
        
        
        }

        printf("The details of students is as follows:\n");
            //struct student s[1];
        for(int i=0; i<max; i++){
            printf("Student id: %d\n", s[i].studentID);
            printf("Student name: %s\n", s[i].name);
            printf("The marks of student:");
            for(int j=0; j<3; j++){
            printf("The marks of student: %f\n", s[i].marks[j]);
            }
            printf("Total marks obtained: %f", s[i].total);
        }
        int high=0;
        for(int i=0; i<max; i++)
        {
            if(s[high].total<s[i].total);
            high = i;
        }
        printf("Student id: %d\n", s[high].studentID);
            printf("Student name: %s\n", s[high].name);
            printf("The marks of student:");
            for(int j=0; j<3; j++){
            printf("The marks of student: %f\n", s[high].marks[j]);
            }
            printf("Total marks obtained: %f", s[high].total);
        return 0;
    }