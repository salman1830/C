#include <stdio.h>

void fib_num(int n)
{
    int i, num_1 = 0, num_2 = 1, next_num = num_1 + num_2;

    printf("Fibonacci Series: %d, %d, ", num_1, num_2);

    for (i = 3; i <= n; i++)
    {
        printf("%d", next_num);
        if(i != n)
        {
            printf(", ");
        }
        num_1 = num_2;
        num_2 = next_num;
        next_num = num_1 + num_2;
    }
}

int main()
{
    int n;
    printf("Enter the limit of fibonacci series: ");
    scanf("%d", &n);
    fib_num(n);
    return 0;
}
