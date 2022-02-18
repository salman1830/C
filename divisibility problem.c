#include<stdio.h>
int main()
{
    int n, m;
    long long int mul1=1, mul2=1;
    scanf("%d %d", &n, &m);
    long long int a[n], b[m], i;
    for(i=0; i<n; i++)
        scanf("%lld", &a[i]);
    for(i=0; i<m; i++)
        scanf("%lld", &b[i]);

    for(i=0; i<n; i++)
    {
        mul1=mul1*a[i];
    }

    for(i=0; i<m; i++)
    {
        mul2=mul2*b[i];
    }

    if(mul2==0 || mul1==0 ||n==0 ||m==0)
        printf("NO\n");

    else if(mul1%mul2==0)
        printf("YES\n");
    else
        printf("NO\n");
}
