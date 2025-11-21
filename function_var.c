#include<stdio.h>
#include<stdarg.h>
void add ( int count, ...)
{
int result = 0;
  va_list mark ;
  va_start ( mark,count);
  for (int i = 0; i<count,i++)
  {
    int n = va_arg(mark,int);
    result = result + n;
  }
  va_end(mark);
  
    printf("%d",result);
}


void main()
{
    add (3,78,96,78);
}