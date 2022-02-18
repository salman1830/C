#include<stdio.h>
void add(int *a, int *b)
{
    *a = *a +*b; // x = 30
    *b = *a; // y = 30

}
int main()
{
    int x =10, y =20;

    add(&x, &y);

    printf("%d %d", x,y);

    return 0;

}
