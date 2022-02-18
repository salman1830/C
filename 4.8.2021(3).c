#include <math.h>

int main()
{
    char x[]="AYESHA SIDDIKA", *p;
    int i;
    p = &x[strlen(x)-1];
    for(i=0; x[i]!='\0'; i++)
    {
        printf("%s \n",p);
        p--;
    }
    return 0;
}
