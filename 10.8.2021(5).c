#include<stdio.h>
int main()
{
    char *name = "Salman Mahmud Shomrat 14580";
    int i,j,b=0;
    char rev[100];
    for(i = 0; name[i]  != '\0'; i++)
    {
        b++;
    }
    for(i=b-1,j=0; i+1!=0; --i,++j)
    {
        rev[j]=name[i];
    }
    rev[j]='\0';
    printf("%s",rev);
    return 0;
}
