#include<stdio.h>
int main()
{
    char *name = "Salman Mahmud shomrat 14584";
    int i, len=0;
    for(i = 0; name[i]  != '\0'; i++)
    {
        if(name[i]=='s')
        {
            len++;
        }
    }
    printf("The number of s: %d", len);
    return 0;
}
