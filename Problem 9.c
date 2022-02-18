#include <stdio.h>
int main()
{
    char ch;

    printf("Enter any character: \n");
    scanf(" %c", &ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("%c is a Vowel.\n ", ch);
    }
    else if( ch == 'b' || ch == 'c' || ch == 'd' || ch == 'f' || ch == 'g' || ch == 'h' || ch == 'j' || ch == 'k' || ch == 'l' || ch == 'm' || ch == 'n' || ch == 'p' || ch == 'q' || ch == 'r' || ch == 's' ||
             ch == 't' || ch == 'u' || ch == 'v' || ch == 'w' || ch == 'x' || ch=='y' || ch=='z'  || ch == 'B' || ch == 'C' || ch == 'D' || ch == 'F' || ch == 'G' || ch == 'H' || ch == 'J' || ch == 'K' || ch == 'L' || ch == 'M'  || ch == 'N' || ch == 'P' || ch == 'Q' || ch == 'R' || ch == 'S' ||
             ch == 'T' || ch == 'U' || ch == 'V' || ch == 'W' || ch == 'X' || ch=='Y' || ch=='Z' )

    {
        printf("%c is a Consonant.\n ", ch);

    }

    else
    {
        printf("%c is a Special Character.\n",ch);
    }
    return 0;
}


