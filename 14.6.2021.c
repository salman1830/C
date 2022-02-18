#include<stdio.h>

int main()
{
    int a;
    scanf("%d" , &a);

    //a='1';

    switch(a)
    {
        case 1:
            {
                printf("Its a");
                break;
            }
        case 2:
            {
                printf("Its 2");
                break;
            }
        case 3:
            {
                printf("Its 3");
                break;
            }

        default:
            {
                printf("Sorry. Its a wrong number.");
                break;
            }
    }
}
