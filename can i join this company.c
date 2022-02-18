#include<stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n], i, j, count=0, sum=0;
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=2; j<a[i]; j++)
        {
            if(a[i]%j==0)
            {
                sum++;
                break;
            }
        }
        if(sum==0 && a[i]>=k)
        {
            count++;
        }
        else
        {
            sum=0;
        }
    }

    printf("%d\n", count);


}
