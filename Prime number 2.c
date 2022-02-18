int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int i, j, count=0;
    for(i=2; i<=a; i++)
    {
        //prime number logic
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
            {
                printf("%d\t", i);
            }
            count=0;
    }
}
