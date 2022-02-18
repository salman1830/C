#include<stdio.h>
int main()
{
    int a = 5;
    int *p;
    p = &a;

    *p += 10;

    printf("Pointer: %d\n", *p);


    return;
}
