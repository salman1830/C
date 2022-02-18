#include<stdio.h>
int main()
{
    int arr[5], i;

    for(i = 0; i < 3; i++)
    {
       scanf("%d",arr+i);
    }

    for(i = 0; i < 3; i++)
    {
        printf("%d\t", *(arr+i));
    }



    return 0;
}
