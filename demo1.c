#include<stdio.h>
int myadd ( int a, int b)
{
    int sum = a + b;
    return sum;

}
void main()
{
    int a = 26;
    int b = 45;
    printf("%d\n",myadd(a,b) );
    int c = 99;
    int d = 47;
    printf("%d\n", myadd(c,d));
}