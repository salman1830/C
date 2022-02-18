#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a );
    if(a%400==0)
        printf("This Year is Leap Year" );

    else if(a%100==0)
        printf("This Year is Not Leap Year" );

    else if(a%4==0)
        printf("This Year Is Leap Year.");

    return 0;
}


