#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    while(n)
    {
        int products;
        scanf("%d", &products);
        int a[products];
        int i;
        for(i=0; i<products; i++)
            scanf("%d", &a[i]);

        while ((getchar()) != '\n');        //flushes the input buffer

        char b;
        scanf("%c", &b);
        int sum=0;
        if(b=='F')
        {
            for(i=0; i<products; i++)
                sum=sum+a[i];
        }
        else
        {
            sum=a[0];
            for(i=1; i<products; i++)
                sum=sum-a[i];
        }

        printf("%d\n", sum);
        n--;
    }
}
