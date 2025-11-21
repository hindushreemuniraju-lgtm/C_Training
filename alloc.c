#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p = (int *)malloc(3*sizeof(int));
    p[0]=1;
    p[1]= 8;
    p[2]= 7;

    p = (int*)realloc(p,5*sizeof(int));
    p[3]= 10;
    p[4]=11;
    
     for( int i = 0 ;i<5;i++)
     {
      printf("%d\n", p[i]);

     }
     free(p);
}

