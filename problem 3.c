#include<stdio.h>
int main()
{
    int a;
        scanf("%d", &a);
        if(a>0)
            printf("Your Number is Positive");
      else if(a<0)
        printf("Your Number is Negative");
      else
        printf("Your Number is Zero");
      return 0;
}
