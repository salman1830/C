#include<stdio.h>
int main()
{
    int arr[]= {1,2,3,4,5},i,b=5,
                              flag=0;

    for(i=0; i<5; i++)
    {
        if(arr[i]==b)
            flag++;
    }
    if(flag==0)
    {
        printf("not found");
    }
    else
    {
        printf("found");
    }
    return 0;
}
