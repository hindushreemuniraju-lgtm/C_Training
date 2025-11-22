#include<stdio.h>
 
void prod_value( int a, int b, int c)

{
int prod = a*b*c;
printf("%d",prod);
}

void main()

{
    int a = 1;
    int b = 2;
    int c= 3;
    prod_value(a,b,c);
    
}