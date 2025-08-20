#include <stdio.h>
#include <stdlib.h>
struct student{
int rollno;
char name[20];
int sem;
float marks1;
float marks2;
float marks3;
};

int main()
{
    struct student s[3];
    struct student *ptr;
    ptr=s;
    float total_marks;
    float total_marks1=0;
    float total_marks2=0;
    float total_marks3=0;
    for(int i=0;i<3;i++){
    printf("enter student details %d \n",i+1);
    printf("enter the name\n");
    scanf("%s",&ptr->name);
    printf("enter roll number\n");
    scanf("%d",&ptr->rollno);
    printf("enter the semester\n");
    scanf("%d",&ptr->sem);
    printf("enter subject 1 marks\n");
    scanf("%f",&ptr->marks1);
    printf("enter subject 2 marks \n");
    scanf("%f",&ptr->marks2);
    printf("enter subject 3 marks\n");
    scanf("%f",&ptr->marks3);
    ptr++;
    }
    ptr=s;
    for(int i=0;i<3;i++){
    printf("details of student %d\n",i+1);
    printf("the name of student is %s\n",ptr->name);
    printf("the roll number is %d\n",ptr->rollno);
    printf("the semester is %d\n",ptr->sem);
    printf("marks of subject 1:%f\n marks of subject 2:%f\n marks of subject 3:%f\n",ptr->marks1,ptr->marks2,ptr->marks3);
    ptr++;
    }
    ptr=s;
    for(int i=0;i<3;i++){
    printf("the total marks of student %d is",i+1);
    total_marks=ptr->marks1+ptr->marks2+ptr->marks3;
    printf("%f\n",total_marks);
    ptr++;
    }
    ptr=s;
    for(int i=0;i<3;i++){
    total_marks1+=ptr->marks1;
    total_marks2+=ptr->marks2;
    total_marks3+=ptr->marks3;
    ptr++;
    }
    printf("the totaL Marks of sub 1 is %f\n",total_marks1);
    printf("the totaL Marks of sub 2 is %f\n",total_marks2);
    printf("the totaL Marks of subject 3 is %f\n",total_marks3);
    return 0;
}
