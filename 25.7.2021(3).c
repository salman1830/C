#include <stdio.h>
int main()
{
    int i, flag = 0;
    char s1[] = "Hello World";
    char ch = 'f';
    for(i = 0; s1[i] != '\0'; i++)
    {
        if(s1[i] == ch){
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        printf("Found");
    else
        printf("Not Found");

    return 0;
}
