#include <stdio.h>
int main()
{
    int i, flag = 0, d = 0, l = 0;
    char s1[] = "Hello123World";

    for(i = 0; s1[i] != '\0'; i++)
    {
        if((s1[i] >= 65 && s1[i] <= 90) || (s1[i] >= 97 && s1[i] <= 122)){
            l++;
        }else if(s1[i] >= 48 && s1[i] <= 57){
            d++;
        }
    }
    printf("No. letters: %d\n", l);
    printf("No. digits: %d\n", d);
    return 0;
}
