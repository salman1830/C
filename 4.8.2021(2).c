#include<stdio.h>

int main()
{
    char arr[50] = "ABB\n";
    char arr2[15] = "CA";
    char a[100];

    int i, j;

    for(i = 0; arr[i] != '\0'; i++)
    {
        a[i] = arr[i];
    }

    for(j = 0; arr2[j] != '\0'; j++)
    {
        a[i] = arr2[j];
        i++;
    }

    a[i] = '\0';

    printf("%s", a);


    return 0;
}
