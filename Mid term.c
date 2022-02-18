#include <stdio.h>

int main() {
    int n,m = 0,o,i;
    scanf("%d" ,&n);

    if(n){
        m += n;
        m += --n;
    }
    for(i = 1; i < m;i++)
    if(o = m == i)
    printf("%d %d %d %d",n,m,o,i);
    else
    printf("%d %d\n",n,++i);



    return 0;
}
