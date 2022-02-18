int main()
{
    int a,b=0,c, sum=0, i=0;
    printf("Enter a number: ");
    scanf("%d", &a);
    while(i<10)
    {
        if(a/10!=0)
        {
            sum=a%10;
            b=b*10+sum;
        }
        else
        {
            b=b+sum;
            break;
        }
    }

    printf("%d", b);
}
