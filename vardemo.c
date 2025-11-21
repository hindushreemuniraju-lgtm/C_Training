#include<stdio.h>
#include<stdarg.h>
void mark (int count, ...)// only 3 dots
{
    va_list list;
    va_start (list, count);
    for (int i = 1; i<=count;i++)

    {
        
        int n = va_arg(list,int);
        printf("%d ", n);
        
    }
 va_end(list);
}

void main()
{
    mark(5,45,65,87,98,78);
}