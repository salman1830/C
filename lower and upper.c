#include<ctype.h>
#include<string.h>

int main()
{
    char a[] = "Salman Mahmud Shomrat";
    int l= strlen(a), i;
    char b[l];
    for(i=0; i<l; i++)
    {
        b[i]=toupper(a[i]);
    }

    for(i=0; i<l; i++)
        printf("%c", b[i]);
}
