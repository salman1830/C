#include <stdio.h>

int main()
{
    int x;
    printf("Even numbers between 40 to 60\n");

    for(x = 40; x <= 60; x++)
    {

        if(x%2 == 0)
        {

            printf("%d ", x);
        }
    }

    return 0;
}
