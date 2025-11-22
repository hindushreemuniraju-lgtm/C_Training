#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student 

{
    char name[100];
    int age;
    float marks;
    /* data */
};

void main()
{
    struct student s1;
    s1.age = 18;
    s1.marks = 99.99;
    strcpy(s1.name,"hemashree");


    struct student s2;
    s2.age = 78;
    s2.marks = 98.00;
    strcpy(s2.name,"lavanya");


    struct student s3 = { " unknown", 98, 99.9};


    printf("%d ",s2.age);
    printf("%d",s1.age);
    printf("%d",s3.age);

    printf("%f ",s1.marks);
    printf("%f ",s2.marks);

        printf("%s",s3.name);



    
    


    
}