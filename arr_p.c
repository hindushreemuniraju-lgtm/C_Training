#include<stdio.h>
void main()
{
    int arr[4] = {65,45,78,900};
    int *p = arr;
    printf("%d", *p);
    printf("%d", *(p+1));

}