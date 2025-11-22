//create a structure with three variables name of car, speed of the car,price 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct car
{
    char car_name[100];
    float speed;
    int price;
};

void main()
{
    int n;
    printf("enter the no of cars:");
    scanf("%d",&n);

    struct car c[n];

    for(int i =0 ; i<n; i++)
    {
        printf("Name:");
        scanf("%s",c[i].car_name);

        printf("car speed :", c[i].speed);
        scanf("%f", &c[i].speed);

        printf("car price :",c[i].price);
        scanf("%d",&c[i].price);
        }



       for(int i = 0; i<n;i++)

       {

        printf("car is %s\n",c[i].car_name);

        printf("car speed is %f\n", c[i].speed);

        printf("car prize is %d", c[i].price);

       }
        
}
