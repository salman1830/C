#include <stdio.h>

void min_max(int n, int *arr)
{

    int min, max, i;
    min = max = arr[0];
    for(i = 1; i < n; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("minimum: %d\n", min);
    printf("maximum: %d", max);
}

int main()
{
    int arr[1000], i, n;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    min_max(n, arr);
    return 0;
}
