#include <stdio.h>

int main()
{
    int i;
    char s1[30] = "Neymar,Ronaldo", s2[40];

    for(i = 0; s1[i] != '\0'; i++){
        s2[i] = s1[i];
    }
    s2[i] = '\0';
    printf("%s", s2);
    return 0;
}
