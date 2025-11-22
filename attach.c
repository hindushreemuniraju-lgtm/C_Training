#include<stdio.h>
void names ( char first[], char last[], int sw)
{
    int i = 0;
    char full [100];
    while( first [i] !='\0')
    {
        full[i] = first[i];
        i++;
    }

    full[i]=' ';
    i++;
    int j = 0;

    while(last[j] !='\0')// removes garbage value
    {
        full[i] = last[j];
        i++;
        j++;
    }
    full[i] = '\0';
    int len = i
    int len = i +
    printf("%d\n",len);

    if ( len<sw)
    {
        printf("fits");
    }
     else
     { 
        printf("doesn't fit");
     }

    printf("%s\n", full);

}
  void main ()
  {
    char first[100] = "Raj";
    char last[100] = "Kumar";
    int sw = 15;
    names (first,last,sw);

  }