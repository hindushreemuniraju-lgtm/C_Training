#include<stdio.h>
void main()
{
    int a = 90;
    int *p = &a;
    printf("a value is %d\n", a);
    printf("value of %p\n", p);
    printf(" p points to %d", *p);
    

}