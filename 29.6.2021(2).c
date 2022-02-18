
#include <stdio.h>
int maximum(int a,int b)
{
    int max;
    if(a>b)
    {

        max = a;
    }
    else if(a<b)
    {

        max=b;
    }
    return max;
}
int main()
{
    int c,d,e;
    scanf("%d %d",&c,&d);
    e = maximum(c,d);
    printf("Largest number = %d",e);
    return 0;
}
