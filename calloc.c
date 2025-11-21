#include<stdio.h>
#include<stdlib.h>
void main()
{
    float *p = (float *)calloc(3,sizeof(float));
    p[0]=78;
    p[1]= 89;
    p[2]= 420;

    printf("%f %f %f ", p[0],p[1],p[2]);
}