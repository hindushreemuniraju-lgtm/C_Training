#include<stdio.h>
void display(int n)
{
    if (n>100)//base cond
    return;
    printf("%d\n",n);
    display(n+2);//reccursive call
}

void main()
{
    display(2);
}