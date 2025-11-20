#include<stdio.h>
int search (int arr[],int key, int n)
{
    for ( int i =0;i<n;i++)
    {
        if (arr[i]==key)
        return 1;
    }
    return 0;
}

void main()
{
    int arr[3]={12,45,78};
    int key;
    int n = 7;
    printf("what are you seraching ?");
    scanf("%d",&key);
    printf("%d", search(arr,key,n));
    
    
}
