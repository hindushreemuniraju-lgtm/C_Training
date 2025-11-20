#include<stdio.h>
void main()
{
    float r;
    printf("enter the value of radius : ");
    scanf("%f", &r);
    const float pi = 3.14;
    float area = pi * r * r;
    printf("%lf", area);

}