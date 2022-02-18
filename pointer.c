int main()
{
    int a=36, *p;
    p=&a;
    a=10;
    printf("%d %d", a, *p);
}
