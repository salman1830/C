#include <stdio.h>

int main()

{
    int arr[100];
    int x;
    scanf("%d",&x);

    int a;
    for(a=0; a<x; a++)
    {
        scanf("%d",&arr[a]);
    }

    int p,q;
    scanf("%d %d",&p,&q);

    int sum=0;

    for(a=p; a<=q; a++)
    {
        sum = sum + arr[a];
    }
    printf("%d\n",sum);

    return 0;

}
