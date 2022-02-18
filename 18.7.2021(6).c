#include<stdio.h>

int main()
{
    char *arr = "Hello World";

    int i;
    for(i = 0; arr[i] != '\0'; i++);

    printf("Length: %d", i);

    return 0;

}
