#include<stdio.h>
#include<stdlib.h>

void main()
{
    int*p = (int*)malloc(4*sizeof(int));
    p[0]=45;
    p[1]=78;
    p[3]=148;
    p[4]= 420;

printf("%d %d %d hemashree is %d ",p[0],p[1],p[3],p[4]);
}