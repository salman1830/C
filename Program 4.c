#include<stdio.h>

int fact(int n)
{
    if(n==0||n==1)
        return 1;
    else

        return n* fact(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int f=fact(n);
    printf("Factorial=%d\n",f);
    return 0;
}
