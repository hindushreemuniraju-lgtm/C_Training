#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct book
{
    char name[100];
    char author[100];
    int year;
};

void main()
{
    int n;
    printf("enter the no of books :");
    scanf("%d",&n);

    struct book b[n];

    for ( int i= 0;i<n;i++)
    {
        printf("enter name of book:");
        scanf("%s",b[i].name);

          printf("enter name of author:");
        scanf("%s",b[i].author);

          printf("enter year  of publication of  book:");
        scanf("%d",&b[i].year);
    }
        printf("your information : \n");
     for( int i = 0;i<n;i++)
     {
        printf("book is : %s\n", b[i].name);
        printf("book is author :%s\n", b[i].author);
        printf("book publication year : %d\n", b[i].year);



     }
}