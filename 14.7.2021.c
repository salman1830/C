#include<stdio.h>
int main()
{
    int arr[] = {10, 20, 40};

    int i, *p = &arr;

    for(i = 0; i < 3; i++)
    {
        printf("%d\n", *p); // arr[0]
        p++;
    }


    return 0;
}
