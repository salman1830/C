#include<stdio.h>

int main()
{
    int n,k;
    scanf("%d %d", &n, &k);
    int a[n], i, count=0;
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    k--;

    for(i=0; i<n; i++)
    {
        if(a[i]>=a[k])
            count++;
    }

    printf("%d\n", count);

}
