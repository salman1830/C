#include<stdio.h>
int main()
{
    char *name = "Salman Mahmud Shomrat";
    int i,s=0;
    for(i = 0; name[i]  != '\0'; i++)
    {
        if(name[i]==' ')
        {
            s++;
        }
    }
    printf("%d", s);
    return 0;
}
