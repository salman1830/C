#include <stdio.h>

int main()
{
    int x,y;
    int num;

    for(x=1; x<=10; x++)
    {

        num= x;
        for(y=1; y<=10; y++)
        {

            printf("%3d\t",(num*y));
        }

        printf("\n");
    }
    return 0;
}
