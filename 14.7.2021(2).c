#include<stdio.h>
void add(int *a, int *b, int *c)
{
    *c = *a + *b; //
}

int main()
{
    int x = 10, y = 20,sum = 0;

    add(&x, &y, &sum);

    printf("%d", sum);
}
