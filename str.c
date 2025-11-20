#include<stdio.h>
#include<string.h> // to accesss all the string library
void main()
{
    char name [12] = "hindushree";
    char new [100] = "hello";
    printf("%c", name [7]);
    printf("length of  string is %d\n", strlen(name) );
    strcat(new,name);
    printf("%s",new);
    printf("%c",strlen(new));
}