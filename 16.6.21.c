#include<stdio.h>
main()
{
    char n;
    printf("enter a letter ");
    scanf("%c",&n);
    switch(n)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Vowel\n");
        break;
    default:
        printf("Consonant\n");
        break;
    }

    printf("%c", n);
}
/**
a/A  vowel
e vowel
b/B consonant
*/
