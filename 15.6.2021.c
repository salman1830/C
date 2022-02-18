#include<stdio.h>

int main()
{
    int a[10], i, e = 0,o=0;

    printf("Enter the array elements: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 5; i++)
    {
        if(a[i] % 2 != 0)
        {
          o++;
        }
        else
        {
          e++;
        }
    }
    printf("total odd number=%d\n",o);
    printf("total even number=%d\n",e);
    return 0;
}
