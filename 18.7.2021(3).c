#include<stdio.h>

int main()
{
    int a = 5, b = 6 ,c = 7;
    int *ptr[3]={&a, &b, &c};


    printf("%d\n", *ptr[0]);
    printf("%d\n", *ptr[1]);
    printf("%d\n", *ptr[2]);

    return 0;

}
