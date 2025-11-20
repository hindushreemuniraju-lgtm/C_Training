#include<stdio.h>
#include<string.h>
void main()
{ 
 char str1[100],str2[100];
 printf("enter the value of str:");
 scanf("%s", str1);
 printf("enter the value of str2:");
 scanf("%s", str2);
 if (strcmp(str1,str2)==0)
 {
    printf("strings are same\n");

 }
 else
 {
    printf("string are not same\n");
 }
}
