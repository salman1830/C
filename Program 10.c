
#include<stdio.h>

float perimeter(float a,float b)
{
    float p;
    p=2*(a+b);

    printf("perimeter is a rectangle =%.2f (unit)",p);
    return p;
}
int main()
{
    float a,b;
    printf("length=a Width=b\n");
    scanf("%f %f",&a,&b);
    perimeter(a,b);

    return 0;
}
