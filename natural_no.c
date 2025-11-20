//write a c program to add sum of five natural number
#include<stdio.h>
int main()
{
    int result = 0;
    int n;
    result = 0 + 1;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for (int i = 1; i<=n; i++)
{ 
         result = result + 1;
}
    printf("sum is %d", result);

}