#include<stdio.h>

int main()
{
    char arr[100];

    //scanf("%[^\n]s", arr);

    gets(arr);

    printf("%s", arr);

    return 0;

}
