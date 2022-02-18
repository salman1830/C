#include <stdio.h>
int main()
{

    int num;

    scanf( "%d", &num );

    if( ( num >=37 && num <= 500 && num%2 == 1 ) )
    {
        printf( "You are lucky number one");
    }
    else
    {
        printf( "No matters" );
    }
    return 0;
}
