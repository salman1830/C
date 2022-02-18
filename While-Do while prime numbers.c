#include<stdio.h>
int main()
{
    int num, i=2;
    printf(" Enter a number:\n");
    scanf("%d",&num);
    while(i<num)
    {
        if(num%i==0)
        {
            printf("%d is not a prime number \n",num);
            break;
        }
        i++;
    }
    if(i==num)
        printf("%d is a prime number \n",num);
    return 0;
}

