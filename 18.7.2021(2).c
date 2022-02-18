#include<stdio.h>

int main()
{
    int a = 7, *p1, **p2;

    p1 = &a;

    p2 = &p1;

    //printf("%d\n", &a);
    printf("%d\n", *(*p2));

    return 0;

}
