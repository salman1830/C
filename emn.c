#include<stdio.h>

int main()
{
    int a, *p=&a;
    a=5;
    printf("%d\t%x", *p, p);
}
