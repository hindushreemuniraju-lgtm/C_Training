// write a c program using function which as three parameters l,b,h and returns volume of cubiodal
#include<stdio.h>
int volume ( int l , int b, int h)
{
    int volume = (l*b*h);
    return volume;
}
void main()
{
    int l = 24;
    int b = 1;
    int h = 10;
    printf("volume is %d",volume(l,b,h));

}