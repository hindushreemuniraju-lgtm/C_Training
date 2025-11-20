// using arrays in the functions
#include<stdio.h>

int addarr ( int arr[], int n)
{
    int result = 0;
    for (int i = 0; i<n; i++)
    {result = result = arr[i];
    }
    return result;
}
void main()
{
    int arr[3] = {33,48,78};
    int n = 3;
    {
        
        printf("%d", addarr (arr,n));
    }
}