#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student 
{
    char name[100];
    int age;
    float marks;
};

void main()

{

    struct student s1;
    struct student *p = &s1;
    strcpy (p-> name," Lavanya");
    p->age= 18;
    p->marks=84.9;


    struct student s2 = { "hindu",19,97.44};

    printf("%d ",p-> age);
    printf("%f ",p-> marks);
    printf("%s ", p->name);

            printf("%s ",s2.name);
             printf("%d ",s2.age);
               printf("%f",s2.marks);





    
}