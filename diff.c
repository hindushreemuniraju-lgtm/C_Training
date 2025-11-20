// Write a function using c program which should accept an array its size is n and returns 1st and 3rd difference
#include<stdio.h>
#include<stdlib.h> // to apply modulus we required this library

int sub_arr(int arr[], int n) // function
{
 int sub = arr[0] - arr[n-1];
 return abs(sub); //abs is used as modulus to remove negative side
}
 void main()
 {
    int arr[5] = {2,5,8,7,10};
    int n = 5;
    printf("%d", sub_arr(arr,n));
 }


