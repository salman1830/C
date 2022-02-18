#include<stdio.h>

int main()
{
    int a[10], i, j, sum = 0, id = 80;
 printf("Enter 10 integers: ");
    for(i = 0; i < 10; i++){
        scanf("%d", &a[i]);
        if(a[i]%2 == 0){
            sum+= a[i];
        }
    }
    if(sum > id){
        printf("Sum is greater\n");
    }else{
        printf("ID is greater\n");
    }

    return 0;
}



