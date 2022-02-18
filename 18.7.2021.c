#include<stdio.h>
void add(int *x, int*y)
{
    int sum=(*x)+(*y);
    printf("sum=%d",sum);
    *x=15;
}
int main()
{
    int a=10, b=20;
    add(&a,&b);
    printf("\nBefore calling adda=%d b=%d",a,b);
    add(&a,&b);
    printf("\n After calling add a=%d b=%d",a,b);

}
