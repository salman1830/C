#include<stdio.h>
int main()
{
    int a;
    printf("ENTER A NUMBER: ");
    scanf("%d", &a);
    int i,count=0;
    for(i=2; i<a ; i++)
    {
        if(a%i==0)
        {
            count++;
            break;
        }
    }
    if(count >0 )
    {
        printf("This number is NOT PRIME");

    }
    else
    {
        printf("This number is PRIME");
    }
    return 0;
}

