#include<stdio.h>

void main()
{
    int aage = 18;
    float hheight = 5.00;
    int age;
    float height;
    printf("enter the age: ");
    scanf("%d", &age);
    printf("enter the height: ");
    scanf("%f", &height);

    if((age>=aage) && (height>=hheight))
    {

    printf("you are eligible");
    }

    else
    {
    printf("you are not eligible");
    }

}